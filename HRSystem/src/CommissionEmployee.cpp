#include "CommissionEmployee.h"
double CommissionEmployee::setSalary2()
{
    cout<<"\n\t6. Salary: ";
    cin>>m_salary;
    cout<<"Enter The Target: ";
    cin>>m_target;
    cout<<"\nEnter The rate of target: ";
    cin>>m_rate;
    m_totalS2=m_target*m_rate*m_salary;
}
double CommissionEmployee::getSalary2()
{
    cout<<"Salary is >> "<<m_target*m_rate*m_salary<<endl;

}

