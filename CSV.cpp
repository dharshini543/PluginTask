#include "CSV.h"
#include<iostream>
#include"Student.h"
CSV::CSV()
{

}

list<Student> CSV::readData()
{
    cout<<"Reading data from CSV file"<<endl;
    list<Student> Studentlist;
    for(int i = 0; i < 10;i++)
    {
        Studentlist.push_back(Student("D",25,1234,98745));
    }
    return Studentlist;
}
CSV::~CSV()
{

}

