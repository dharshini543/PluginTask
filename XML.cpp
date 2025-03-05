#include "XML.h"
#include<iostream>
XML::XML()
{

}

list<Student> XML::readData()
{
    cout<<"Reading data from XML file"<<endl;
    list<Student> Studentlist;
    for(int i = 0; i < 10;i++)
    {
        Studentlist.push_back(Student("D",25,1234,98745));
    }
    return Studentlist;
}
XML::~XML()
{

}

