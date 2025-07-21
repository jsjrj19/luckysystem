#include "personlistmanager.h"
#include<QMessageBox>
#include<QListWidgetItem>
#include <QFile>
#include<QTextStream>
#include<QStringList>
#include <QAxObject>
#include<person.h>


PersonListManager::PersonListManager()
{

}
//获取所有Person对象的姓名列表
QStringList PersonListManager::getNames() const
{
    QStringList names;
    for (const auto& person : personList) {
        names.append(person.name()); // 确保 Person 类有 public 的 name() 方法
    }
    return names;
}
//实现手动加入
bool PersonListManager::addPerson(const QString& name){
    personList.append(Person(name));
    return true;
}
//实现手动删除
bool PersonListManager::deletePerson(const QString& name){
    for (int i = 0; i < personList.size(); ++i) {
            if (personList[i].name() == name) {
                personList.removeAt(i);
                return true;  // 删除成功
            }
        }
        return false;  // 没找到此人
}
//实现一键删除
void PersonListManager::clearNames(){
    personList.clear();
}
//实现导入.txt文件
bool PersonListManager::importTxt(const QString &filePath){
    QFile file(filePath);//创建文件对象
    //尝试以只读模式打开文本
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return false;
    //创建文本流读入文件
    QTextStream in(&file);
    //清楚已有的缓存
    personList.clear();
    //逐行读取直至结束
    while(!in.atEnd()){
        //删除首尾空格
        QString line=in.readLine().trimmed();
        //忽略空行
        if(!line.isEmpty())
            personList.append(Person(line));
    }

    return true;

}
//实现导入csv文件
bool PersonListManager::importCsv(const QString &filePath,int nameColumn){
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return false;
    QTextStream in(&file);
    personList.clear();
    while (!in.atEnd()) {
        QString line=in.readLine();
        QStringList parts=line.split(",");//用，分隔
        if(parts.size()>nameColumn){
                QString name=parts[nameColumn].trimmed();
                if(!name.isEmpty())
                    personList.append(Person(name));
            }


    }
    return true;
}

//实现对exl的导入
bool PersonListManager::importExl(const QString &filePath, int nameColumn)
{
    //创建Excel应用程序对象并设置为不可见
    QAxObject* excel = new QAxObject("Excel.Application");
    excel->dynamicCall("SetVisible(bool)", false);

    //获取工作簿集合对象并尝试打开指定文件
    QAxObject* workbooks = excel->querySubObject("Workbooks");
    QAxObject* workbook = workbooks->querySubObject("Open(const QString&)", filePath);
    //若文件打开失败
    if (!workbook) {
        delete excel;
        return false;
    }

    //获取第一个工作表和已使用范围，确定数据行数
    QAxObject* worksheet = workbook->querySubObject("Worksheets(int)", 1);
    QAxObject* usedRange = worksheet->querySubObject("UsedRange");
    int rowCount = usedRange->property("Rows").toInt();

    //清空现有数据
    personList.clear();
    //逐行读取姓名
    for (int row = 1; row <= rowCount; ++row) {
        QAxObject* cell = worksheet->querySubObject("Cells(int, int)", row, nameColumn);
        QString name = cell->dynamicCall("Value()").toString();
        if (!name.isEmpty()) {
            personList.append(Person(name));
        }
        delete cell;
    }

    //关闭工作簿
    workbook->dynamicCall("Close()");
    excel->dynamicCall("Quit()");
    delete worksheet;
    delete workbooks;
    delete excel;

    return true;
}
//根据文件后缀来决定使用什么策略
bool PersonListManager::importFile(const QString &filePath,int nameColumn){
    if(filePath.endsWith(".txt",Qt::CaseInsensitive)){
        return importTxt(filePath);
    }else if(filePath.endsWith(".csv",Qt::CaseInsensitive)){
        return importCsv(filePath,nameColumn);
    }else if(filePath.endsWith("xlsx",Qt::CaseInsensitive)){
        return importExl(filePath,nameColumn);
    }else{
        return false;
    }
}
//文件保存
bool PersonListManager::saveFile(const QStringList& names,const QString& filePath){
    QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
        qWarning("无法打开文件保存：%s",qUtf8Printable(file.errorString()));
        return false;

    }

    QTextStream out(&file);
    out.setCodec("UTF-8");

    out<<"姓名\n";
    for(const QString& name:names){
        out<<name<<"\n";
    }
    file.close();
    return true;


}
