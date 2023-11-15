#ifndef BENEFIT_H
#define BENEFIT_H
#include<string>
#include<iostream>
using namespace std;
class Benefit
{
protected:
    string m_planType;
    double m_amount;
public:
    void setBenefit();
    virtual string displayBenefit();
};

#endif // BENEFIT_H

