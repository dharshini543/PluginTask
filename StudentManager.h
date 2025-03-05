#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <list>
#include"Student.h"
using namespace std;
enum
{
    csv = 1,
    xml,
    json,
    ui
};
class File_operations;
class StudentManager
{
    File_operations* m_fp;
    list<Student> m_student;
public:
    StudentManager();
    void initStudent(list<Student> student);
    void selectFile();
    ~StudentManager();
};

#endif // STUDENTMANAGER_H
