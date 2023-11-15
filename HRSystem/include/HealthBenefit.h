#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include <Benefit.h>

class HealthBenefit : public Benefit
{
private:
    string m_info;
    string m_coverage;
public:
    void moreBenefit();
    string displayBenefit();
};

#endif // HEALTHBENEFIT_H

