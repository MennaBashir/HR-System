#include "Benefit.h"
void Benefit::setBenefit()
{
    cout<<"\nRecord the Benefits for employee\x03"<<endl;
    cout<<"\nEnter Benefit Type: ";
    cin>>m_planType;
    cout<<"\nEnter the Quantity: ";
    cin>>m_amount;
}
string Benefit::displayBenefit()
{
    cout<<"\nThe benefits of this employee is\x02"<<endl;
    cout<<"  Benefit Type is: "<<m_planType<<endl;
}


