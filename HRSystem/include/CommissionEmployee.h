#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <Employee.h>
class CommissionEmployee : public Employee
{
protected:
    double m_target;
    double m_rate;
public:
    double m_totalS2;
    double setSalary2();
    double getSalary2();

};

#endif
