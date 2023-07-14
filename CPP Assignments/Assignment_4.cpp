// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 4
// PROBLEM STATEMENT : Write a C++ program to create a base class Person (name and phone number). Derive Academic Performance (Degree, percentage) class from Person class. Display Biodata of the person.

#include<iostream>
#include<string>
using namespace std;
class Person
{
    protected:
        string name;
        int phone;

    public:
        int getdata1()
        { 
            cout<<"\n Enter the Name of Person : ";
            cin>>name;
            cout<<"\n Enter the Phone Number : ";
            cin>>phone;
            return 0;
        }
};
class Academic_Performance : public Person
{
    private:
        string deg;
        float per;

    public:
        int getdata2()
        {
            cout<<"\n Enter the Degree : ";
            cin>>deg;
            cout<<"\n Enter the Percentage : ";
            cin>>per;

            return 0;
        }
        int putdata()
        {
            cout<<"\n Name         : "<<name;
            cout<<"\n Phone Number : "<<phone;
            cout<<"\n Degree       : "<<deg;
            cout<<"\n Percentage   : "<<per;
            return 0;
        }
};
int main()
{
    Academic_Performance obj;
    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";
    obj.getdata1();
    obj.getdata2();
    obj.putdata();
    return 0;
}
// Output

/* 
 WELCOME TO HARSHAL's ASSIGNMENT
 
 Enter the Name of Person : Harshal_Patil

 Enter the Phone Number : 1234567890

 Enter the Degree : Btech

 Enter the Percentage : 99

 Name         : Harshal_Patil
 Phone Number : 1234567890
 Degree       : Btech
 Percentage   : 99*/