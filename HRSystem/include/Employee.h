#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
using namespace std;
class Employee
{
protected:
    string m_name;
    long m_phone;
    string m_email;
    string m_jobTitle;
    double m_salary;
public:
    int m_employeeID;
    int DisplayDetails();


};

#endif
