#include "HrSystem.h"

void HrSystem::addEmployee()
{
    cout<<"Please,Record Employee's data consist of\x03"<<endl;
    cout<<"\t1. ID: ";
    cin>>m_employeeID;
    cout<<"\n\t2. Name: ";
    cin>>m_name;
    cout<<"\n\t3. Job Title: ";
    cin>>m_jobTitle;
    cout<<"\n\t4. Email address: ";
    cin>>m_email;
    cout<<"\n\t5. Phone: ";
    cin>>m_phone;



}
void HrSystem::editEmployee()
{
    cout<<"Make the modifications that you want\x03"<<endl;
    cout<<"\t1. ID: ";
    cin>>m_employeeID;
    cout<<"\n\t2. Name: ";
    cin>>m_name;
    cout<<"\n\t3. Job Title: ";
    cin>>m_jobTitle;
    cout<<"\n\t4. Email address: ";
    cin>>m_email;
    cout<<"\n\t5. Phone: ";
    cin>>m_phone;


}


