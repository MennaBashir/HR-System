#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include"Employee.h"
#include<string>
#include<iostream>
using namespace std;
class HrSystem : public Employee
{
public:
    void addEmployee();
    void editEmployee();
};

#endif
