#include "UI.h"
#include <iostream>

UI::UI()
{

}

list<Student> UI::readData()
{
    cout<<"Reading data from UI"<<endl;
    list<Student> Studentlist;
    for(int i = 0; i < 10;i++)
    {
        Studentlist.push_back(Student("D",25,1234,98745));
    }
    return Studentlist;
}
UI::~UI()
{

}
