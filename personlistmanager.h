#ifndef PERSONLISTMANAGER_H
#define PERSONLISTMANAGER_H


class PersonListManager
{
public:
    PersonListManager();
    void addPerson();
    void deletePerson();
    void importFile();
    //多种格式文件导入
    void saveFile();

};

#endif // PERSONLISTMANAGER_H
