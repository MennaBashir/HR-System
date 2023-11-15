#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include <Benefit.h>
class DentalBenefit : public Benefit
{
private:
    string m_info;

public:
    void moreBenefit1();
    string displayBenefit();
};

#endif // DENTALBENEFIT_H

