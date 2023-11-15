#include <iostream>
#include"Department.h"
#include"Benefit.h"
#include"HealthBenefit.h"
#include"DentalBenefit.h"
#include"Employee.h"
#include"HourlyEmployee.h"
#include"CommissionEmployee.h"
#include"SalariedEmployee.h"
#include"ManagerEmployee.h"
#include"HrSystem.h"
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    system("Color 84");
    cout<<"\n \t\t    ================================="<<endl;
    cout<<" \t\t    |                               |"<<endl;
    cout<<" \t\t    |    \x03 HR Management System \x03   |"<<endl;
    cout<<" \t\t    |                               |"<<endl;
    cout<<" \t\t    ================================= "<<endl;
    int n,n1,n2,n3,n4,A1,A2,A3,A4,B1,B2; //Size
    cout<<"\n\n  Hello, you must enter a default number to reserve the space required"<<endl;
    cout<<"  to receive all the data that you want to store : ";
    cin>>n;
    system("cls");

    n1=n2=n3=n4=A1=A2=A3=A4=B1=B2=n;
    int D=0,D1;//Depart
    int a=0,a1=0,ax,b=0,b1=0,bx;//employee
    int c=0,c1=0,cx,d=0,d1=0,dx,s=0;
    int be1=0,be2=0,be11=0,be22=0,g,h,h1;//benefit
    int x,y,em,em1,em2,em3,em4;//if
    int ser1,ser2,ser3,ser4;//search
    Department *op = new Department[n];
    HrSystem *op1 =new HrSystem[n1];//for set 4employee
    HrSystem *op2 =new HrSystem[n2];
    HrSystem *op3=new HrSystem[n3];
    HrSystem *op4=new HrSystem[n4];

    HourlyEmployee *AB1=new HourlyEmployee[A1];
    CommissionEmployee *AB2=new CommissionEmployee[A2];
    SalariedEmployee *AB3=new SalariedEmployee[A3];
    ManagerEmployee *AB4=new ManagerEmployee[A4];

    HealthBenefit *BE1=new HealthBenefit[B1];
    DentalBenefit *BE2=new DentalBenefit[B2];

    do
    {
        system("Color 89");

        system("cls");
        cout<<"  Welcome,Choose the right file\x02....."<<endl;
        cout<<"\t1->> Department File"<<endl;
        cout<<"\t2->> Employee File "<<endl;
        cout<<"\t3->> Benefit File "<<endl;
        cout<<"\t0->> Exit Application "<<endl;
        cin>>x;
        system("cls");
        if(x==1)
        {
            system("Color 81");
            do

            {
                system("cls");
                cout<<"Choose the right one for what you want\x03"<<endl;
                cout<<"\t1.Add a new depart"<<endl;
                cout<<"\t2.Show all departs"<<endl;
                cout<<"\t3.Modify a depart "<<endl;
                cout<<"\t4.Delete all departs"<<endl;
                cout<<"\t0.Return Main Menu"<<endl;
                cin>>y;
                if(y==1)
                {
                    op[D++].setDepart();
                    cout<<" Press Enter To Continue"<<endl;
                    getch();
                }
                if(y==2)
                {
                    for(int i=0; i<D; i++)
                    {
                        op[i].getDepart();
                    }
                    cout<<" Press Enter To Continue"<<endl;
                    getch();
                }
                if(y==3)
                {
                    cout<<"enter the number of employee you modify : ";
                    cin>>D1;
                    cout<<endl;
                    op[--D1].setDepart();
                    cout<<" Press Enter To Continue"<<endl;
                    getch();
                }
                if(y==4)
                {
                    delete []op;
                    cout<<" Press Enter To Continue"<<endl;
                    getch();
                }
            }
            while(y!=0);

        }
        if(x==2)
        {
            system("Color 80");

            do
            {
                system("cls");
                cout<<"First you must choose the employee's file\x03..."<<endl;
                cout<<"\t(1) Hourly Employee"<<endl;
                cout<<"\t(2) Commission Employee"<<endl;
                cout<<"\t(3) Salaried Employee "<<endl;
                cout<<"\t(4) Manager Employee"<<endl;
                cout<<"\t(5) Calculate total payroll"<<endl;
                cout<<"\t(0) Return main menu"<<endl;
                cin>>em;
                system("cls");
                if(em==1)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new employee"<<endl;
                        cout<<"\t2.Modify an employee "<<endl;
                        cout<<"\t3.Find an employee"<<endl;
                        cout<<"\t4.Show all employee"<<endl;
                        cout<<"\t5.Delete all employee"<<endl;
                        cout<<"\t0.Go back...."<<endl;
                        cin>>em1;
                        switch(em1)
                        {
                        case 1:
                            op1[a++].addEmployee();
                            AB1[a1++].setSalary1();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            cout<<"Enter the employee number you want to modify his data"<<endl;
                            cin>>ax;
                            op1[--ax].editEmployee();
                            AB1[--ax].setSalary1();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            cout<<"Enter ID for the employee you want to search for"<<endl;
                            cin>>ser1;
                            for(int k=0; k<a; k++)
                            {
                                if(ser1==op1[k].m_employeeID)
                                {
                                    op1[k].DisplayDetails();
                                    AB1[k].getSalary1();
                                }
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 4:
                            for(int K=0; K<a; K++)
                            {
                                op1[K].DisplayDetails();
                                AB1[K].getSalary1();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 5:
                            delete []op1;
                            delete []AB1;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(em1!=0);
                }
/////////////////////////////////////////////
                if(em==2)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new employee"<<endl;
                        cout<<"\t2.Modify an employee "<<endl;
                        cout<<"\t3.Find an employee"<<endl;
                        cout<<"\t4.Show all employee"<<endl;
                        cout<<"\t5.Delete all employee"<<endl;
                        cout<<"\t0.Go back...."<<endl;
                        cin>>em2;
                        switch(em2)
                        {
                        case 1:
                            op2[b++].addEmployee();
                            AB2[b1++].setSalary2();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            cout<<"Enter the employee number you want to modify his data"<<endl;
                            cin>>bx;
                            op2[--bx].editEmployee();
                            AB2[--bx].setSalary2();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            cout<<"Enter ID for the employee you want to search for"<<endl;
                            cin>>ser2;
                            for(int k1=0; k1<b; k1++)
                            {
                                if(ser2==op2[k1].m_employeeID)
                                {
                                    op2[k1].DisplayDetails();
                                    AB2[k1].getSalary2();
                                }
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 4:
                            for(int K1=0; K1<b; K1++)
                            {
                                op2[K1].DisplayDetails();
                                AB2[K1].getSalary2();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 5:
                            delete []op2;
                            delete []AB2;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(em2!=0);
                }

///////////////////////////////////////
                if(em==3)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new employee"<<endl;
                        cout<<"\t2.Modify an employee "<<endl;
                        cout<<"\t3.Find an employee"<<endl;
                        cout<<"\t4.Show all employee"<<endl;
                        cout<<"\t5.Delete all employee"<<endl;
                        cout<<"\t0.Go back...."<<endl;
                        cin>>em3;
                        switch(em3)
                        {
                        case 1:
                            op3[c++].addEmployee();
                            AB3[c1++].setSalary3();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            cout<<"Enter the employee number you want to modify his data"<<endl;
                            cin>>cx;
                            op3[--cx].editEmployee();
                            AB3[--cx].setSalary3();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            cout<<"Enter ID for the employee you want to search for"<<endl;
                            cin>>ser3;
                            for(int k2=0; k2<c; k2++)
                            {
                                if(ser3==op3[k2].m_employeeID)
                                {
                                    op3[k2].DisplayDetails();
                                    AB3[k2].getSalary3();

                                }
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 4:
                            for(int K2=0; K2<c; K2++)
                            {
                                op3[K2].DisplayDetails();
                                AB3[K2].getSalary3();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 5:
                            delete []op3;
                            delete []AB3;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(em3!=0);
                }
////////////////////////////////////////////////////////
                if(em==4)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new employee"<<endl;
                        cout<<"\t2.Modify an employee "<<endl;
                        cout<<"\t3.Find an employee"<<endl;
                        cout<<"\t4.Show all employee"<<endl;
                        cout<<"\t5.Delete all employee"<<endl;
                        cout<<"\t0.Go back...."<<endl;
                        cin>>em4;
                        switch(em4)
                        {
                        case 1:
                            op4[d++].addEmployee();
                            AB4[s++].setSalary3();
                            AB4[d1++].setSalary4();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            cout<<"Enter the employee number you want to modify his data"<<endl;
                            cin>>dx;
                            op4[--dx].editEmployee();
                            AB4[--dx].setSalary3();
                            AB4[--dx].setSalary4();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            cout<<"Enter ID for the employee you want to search for"<<endl;
                            cin>>ser4;
                            for(int k3=0; k3<d; k3++)
                            {
                                if(ser4==op4[k3].m_employeeID)
                                {
                                    op4[k3].DisplayDetails();
                                    AB4[k3].getSalary4();
                                }

                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 4:
                            for(int K3=0; K3<d; K3++)
                            {
                                op4[K3].DisplayDetails();
                                AB4[K3].getSalary4();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 5:
                            delete []op4;
                            delete []AB4;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(em4!=0);
                }

                if(em==5)
                {
                    int total=0;
                    for(int p=0; p<n; p++)
                    {
                        total+=AB1[p].m_totalS1+AB2[p].m_totalS2+AB3[p].m_totalS3+AB4[p].m_totalS4;
                    }
                    cout<<"Total Payroll is >> "<<total<<endl;
                    cout<<" Press Enter To Continue"<<endl;
                    getch();
                    system("cls");
                }

            }
            while(em!=0);

        }
        ////x==2 finish
        if(x==3)
        {
            system("Color 85");
            do
            {
                system("cls");
                cout<<"Choose the type of benefit\x02..."<<endl;
                cout<<"\t1>> Dental Benefit"<<endl;
                cout<<"\t2>> Health Benefit"<<endl;
                cout<<"\t0>> Return main menu"<<endl;
                cin>>g;
                system("cls");
                if(g==1)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new benefit"<<endl;
                        cout<<"\t2.Show all benefit"<<endl;
                        cout<<"\t3.Delete all benefit"<<endl;
                        cout<<"\t0.Go back..."<<endl;
                        cin>>h;
                        system("cls");
                        switch(h)
                        {
                        case 1:
                            BE2[be1++].setBenefit();
                            BE2[be11++].moreBenefit1();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            for(int f1=0; f1<be1; f1++)
                            {
                                BE2[f1].DentalBenefit::displayBenefit();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            delete []BE2;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(h!=0);
                }
                if(g==2)
                {
                    do
                    {
                        system("cls");
                        cout<<"What do you want to do"<<endl;
                        cout<<"\t1.Add a new benefit"<<endl;
                        cout<<"\t2.Show all benefit"<<endl;
                        cout<<"\t3.Delete all benefit"<<endl;
                        cout<<"\t0.Go back..."<<endl;
                        cin>>h1;
                        system("cls");
                        switch(h1)
                        {
                        case 1:
                            BE1[be2++].setBenefit();
                            BE1[be22++].moreBenefit();
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 2:
                            for(int f2=0; f2<be2; f2++)
                            {
                                BE1[f2].displayBenefit();
                            }
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                            break;
                        case 3:
                            delete []BE1;
                            cout<<" Press Enter To Continue"<<endl;
                            getch();
                        }
                    }
                    while(h1!=0);
                }


            }
            while(g!=0);
        }

    }
    while(x!=0);

    return 0;
}

