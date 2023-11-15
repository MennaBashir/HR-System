#include "HourlyEmployee.h"
double HourlyEmployee::setSalary1()
{
    cout<<"\n\t6. Salary: ";
    cin>>m_salary;
    cout<<"\nEnter The number of working hours: ";
    cin>>m_hoursWorked;
    cout<<"\nEnter The rate per hour: ";
    cin>>m_rate;
    m_totalS1=m_rate*m_hoursWorked *m_salary;
}
double HourlyEmployee::getSalary1()
{
    cout<<"Salary is >> "<<m_rate*m_hoursWorked *m_salary<<endl;

}

