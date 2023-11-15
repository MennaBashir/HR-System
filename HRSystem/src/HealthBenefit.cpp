#include "HealthBenefit.h"
void HealthBenefit::moreBenefit()
{
    cout<<"\nEnter more information about benefit: ";
    cin>>m_info;

}
string HealthBenefit::displayBenefit()
{
    Benefit::displayBenefit();
    cout<<"More Information about benefit is: "<<m_info<<endl;
    cout<<"\t The Quantity is: "<<0.2*m_amount<<endl;
}

