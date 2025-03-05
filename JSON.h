#ifndef JSON_H
#define JSON_H
#include"File_operations.h"

class JSON:public File_operations
{
public:
    JSON();
    list<Student> readData();
    ~JSON();
};

#endif // JSON_H
