#ifndef CSV_H
#define CSV_H
#include"File_operations.h"
#include<list>
#include"StudentManager.h"

class CSV:public File_operations
{
public:
    CSV();
    list<Student> readData();
    ~CSV();
};

#endif // CSV_H
