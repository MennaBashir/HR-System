#include "ManagerEmployee.h"
double ManagerEmployee::setSalary4()
{
    cout<<"Enter the employee's bonus: ";
    cin>>m_bonus;
    m_totalS4=m_totalS3+m_bonus;
}
double ManagerEmployee::getSalary4()
{
    cout<<"Salary is >> "<<m_totalS3+m_bonus<<endl;

}



