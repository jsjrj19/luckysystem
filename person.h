#ifndef PERSON_H
#define PERSON_H
#include<QString>

class Person
{
public:
    //构造函数，使用显式（explicit)防止隐式转换
    explicit Person(const QString& name="");
    //访问其方法，返回人的姓名，const关键字表示不会修改对象状态
    QString name() const;
private:
    QString m_name;
};

#endif // PERSON_H
