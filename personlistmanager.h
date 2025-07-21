#ifndef PERSONLISTMANAGER_H
#define PERSONLISTMANAGER_H
#include <QStringList>
#include<QList>
#include<person.h>

class PersonListManager
{
public:
    PersonListManager();//构造函数
    QStringList getNames() const;//得到全部名单
    bool addPerson(const QString& name);//手动添加人名
    bool deletePerson(const QString& name);//删除人名
    void clearNames();//一键清除
    bool importFile(const QString &filePath,int nameColumn);//根据文件类型选择导入方法
    bool importTxt(const QString &filePath);//.txt的导入
    bool importCsv(const QString &filePath,int nameColumn);//csv的导入
    bool importExl(const QString &filePath,int nameColumn);//exl的导入
    bool saveFile(const QStringList& names,const QString& filePath);//文件导出并保存
private:
    QList<Person> personList;

};

#endif // PERSONLISTMANAGER_H
