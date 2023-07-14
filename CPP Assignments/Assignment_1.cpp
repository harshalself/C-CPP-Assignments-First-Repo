// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 1
// PROBLEM STATEMENT : Write a C++ Program to display Names, employee_id, salary of 3 employees.Declare the class of employee. Create an Array of class objects. Read and display the contents of the array.

#include<iostream>
using namespace std;
class Employee 
{
    private :
        string name;
        int id;
        float salary;
    
    public :
        void setdata()
        {
            cout<<"\n Enter Name : ";
            cin>>name;

            cout<<"\n Enter ID : ";
            cin>>id;
            
            cout<<"\n Enter Salary : ";
            cin>>salary; 
        }
        void getdata()
        {
            cout<<"\n Name of Employee : "<<name;
            cout<<"\n ID of Employee : "<<id;
            cout<<"\n Salary of Employee : "<<salary;
        }
};
int main()
{
    Employee obj[50];
    int n;

    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";

    cout<<"\n Enter No of Employee : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        obj[i].setdata();
    }
    cout<<"\n------------------------------";
    for(int i=0;i<n;i++)
    {
        obj[i].getdata();
        cout<<"\n";
    }
    cout<<"------------------------------";
return 0;
}
// OUTPUT

/*
 WELCOME TO HARSHAL's ASSIGNMENT
 
 Enter No of Employee : 2

 Enter Name : Harshal_Patil

 Enter ID : 1

 Enter Salary : 9999

 Enter Name : Sumeet

 Enter ID : 2

 Enter Salary : 9999

------------------------------
 Name of Employee : Harshal_Patil
 ID of Employee : 1
 Salary of Employee : 9999

 Name of Employee : Sumeet
 ID of Employee : 2
 Salary of Employee : 9999
------------------------------   */