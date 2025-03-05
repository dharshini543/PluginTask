#include "JSON.h"
#include<iostream>
JSON::JSON()
{

}

list<Student> JSON::readData()
{
    cout<<"Reading data from JSON file"<<endl;
    list<Student> Studentlist;
    for(int i = 0; i < 10;i++)
    {
        Studentlist.push_back(Student("D",25,1234,98745));
    }
    return Studentlist;
}

JSON::~JSON()
{

}

