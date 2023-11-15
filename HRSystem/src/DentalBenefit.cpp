#include "DentalBenefit.h"
void DentalBenefit::moreBenefit1()
{
    cout<<"\nEnter more information about benefit: ";
    cin>>m_info;

}
string DentalBenefit::displayBenefit()
{
    Benefit::displayBenefit();
    cout<<"More Information about benefit is: "<<m_info<<endl;
    cout<<"\t The Quantity is: "<<0.1*m_amount<<endl;
}


