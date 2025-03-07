#ifndef UI_H
#define UI_H
#include"Student.h"
#include"File_operations.h"

class UI:public File_operations
{
public:
    UI();
    list<Student> readData();
    ~UI();
};

#endif // UI_H
