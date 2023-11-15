#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include <SalariedEmployee.h>
class ManagerEmployee : public SalariedEmployee
{

protected:
    double m_bonus;
public:
    double m_totalS4;
    double setSalary4();
    double getSalary4();
};

#endif
