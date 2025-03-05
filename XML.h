#ifndef XML_H
#define XML_H
#include"StudentManager.h"
#include"File_operations.h"

class XML:public File_operations
{
public:
    XML();
    list<Student> readData();
    ~XML();
};

#endif // XML_H
