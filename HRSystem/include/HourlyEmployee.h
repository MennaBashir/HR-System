#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <Employee.h>
class HourlyEmployee : public Employee
{
protected:
    double m_hoursWorked;
    double m_rate;
public:
    double m_totalS1;
    double setSalary1();
    double getSalary1();



};

#endif
