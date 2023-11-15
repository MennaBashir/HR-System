#include "Department.h"
void Department::setDepart()
{
    cout<<" Record the Employee's department data\x03"<<endl;
    cout<<"\n\tEnter Depart ID: ";
    cin>>m_departID;
    cout<<"\n\tEnter Depart Name: ";
    cin>>m_departName;
}
void Department::getDepart()
{
    cout<<" the Employee's department data\x02"<<endl;
    cout<<"Depart ID is: "<<m_departID<<"\tDepart Name is: "<<m_departName<<endl;
    cout<<endl;

}
