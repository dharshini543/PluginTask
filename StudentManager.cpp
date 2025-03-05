#include "StudentManager.h"
#include "CSV.h"
#include "File_operations.h"
#include "JSON.h"
#include "UI.h"
#include "XML.h"
#include<iostream>
StudentManager::StudentManager()
{

}

void StudentManager::initStudent(list<Student> student)
{
    m_student = student;
    this->selectFile();
    cout << "Student list Updated in StudentManger" << endl;
}

void StudentManager::selectFile()
{
    int choice;
    cout << "Enter"<<endl<<"1.CSV"<<endl<<"2.XML"<<endl;
    cout << "3.JSON"<< endl<<"4.UI"<<endl;
    cin>>choice;
    switch(choice)
    {
    case csv:
    {
        m_fp = new CSV;
        m_student = m_fp->readData();
    }
    break;
    case xml:
    {
        m_fp = new XML;
        m_student = m_fp->readData();
    }
    break;
    case json:
    {
        m_fp = new JSON;
        m_student = m_fp->readData();
    }
    break;
    case ui:
    {
        m_fp = new UI;
        m_student = m_fp->readData();

    }
    break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }

    for(auto i = m_student.begin();i != m_student.end();i++)
    {
        cout<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobile()<<endl;
    }

}

StudentManager::~StudentManager()
{

}

