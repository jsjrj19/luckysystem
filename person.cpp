#include "person.h"
//构造函数实现
Person::Person(const QString& name):m_name(name){}
//访问器方法实现，初始化列表
QString Person::name() const{return m_name;}
