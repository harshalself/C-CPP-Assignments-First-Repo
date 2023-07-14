// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 8
// PROBLEM STATEMENT : Write a C++ program to Create a class of employees (data members name, DOB, mobile). Write a function to accept the data and display theinformation. Use exception handling while accepting the data. e.g in DOB day value should be in between 1 to 31, month value should be in between 1 to 12 etc. Store and retrieve a data from the file

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Employee
{
    private :
        string name,mob;
        int moblen,d,m,y;

    public :
        void getdata()
        {
            cout<<"\n ***** Enter Details of Employee *****";
            cout<<"\n\n Enter Name: ";
            cin>>name;
            cout<<"\n Enter Mobile Number: ";
            cin>>mob;
            moblen=mob.length();
            cout<<"\n Enter Date of Birth ";
            cout<<"\n Enter Day : ";
            cin>>d;
            cout<<"\n Enter Month : ";
            cin>>m;
            cout<<"\n Enter Year : ";
            cin>>y;
            
        }
        void putdata()
        {
            ofstream ofile;
            ofile.open("Employee.txt");
            if(ofile.is_open())
            {
                cout<<"\n ******** Details of EMPLOYEE *********";
                cout<<"\n Name          : "<<name;
                ofile<<name<<endl;
                cout<<"\n Mobile Number :";
                try
                {
                    if(moblen != 10)
                    {
                        throw 2;
                    }
                    else
                    {
                        cout<<" "<<mob;
                        ofile<<mob<<endl;
                    }
                }
                catch(int q)
                {
                    cout<<"\n Invalid Mobile Number";
                }
                cout<<"\n Date of Birth : ";
                try
                {
                    if(d<1 || d>31 || m<1 || m>12 || y<1900 || y>2023)
                    {
                        throw 1;
                    }
                    else
                    {
                        cout<<" "<<d<<" | "<<m<<" | "<<y;
                        ofile<<d<<" | "<<m<<" | "<<y<<endl;
                    }
                }
                catch(int p)
                {
                    cout<<"\n Invalid DOB";
                }

                ofile.close();
                cout<<"\n Data Stored Successfully ;)";
            }
            else
            {
                cout<<"\n Error opening the file "<<endl;
            }
        }
        void retrieve()
        {
            ifstream ifile;
            ifile.open("Employee.txt");
            if(ifile.is_open()) 
            {
                string line;
                while(getline(ifile,line)) 
                {
                    cout<<line<<endl;
                }
                ifile.close();
            } 
            else 
            {
                cout<<"\n Error opening the file "<<endl;
            }
        }
};
int main()
{
    Employee obj;
    int ch,ch1;
    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";
    do
    {
    cout<<"\n ******** MENU ********";
    cout<<"\n 1. Store Data \n 2. Retrieve Data";

    cout<<"\n Enter Choice : ";
    cin>>ch;

    switch(ch)
    {
        case 1:
            obj.getdata();
            obj.putdata();
            break;
        case 2 : 
            obj.retrieve();
            break; 
        default : 
            cout<<"\n Invalid Choice ";
            break;       
    }
    cout<<"\n Run again(1. Y, 2. N) : ";
    cin>>ch1;
    } while(ch1==1);

return 0;
}

// Output     

/* 
 WELCOME TO HARSHAL's ASSIGNMENT
 ******** MENU ********
 1. Store Data
 2. Retrieve Data
 Enter Choice : 1

 ***** Enter Details of Employee *****

 Enter Name: Harshal_Patil

 Enter Mobile Number: 1234567890

 Enter Date of Birth
 Enter Day : 24

 Enter Month : 04

 Enter Year : 2004

 ******** Details of EMPLOYEE *********
 Name          : Harshal_Patil
 Mobile Number : 1234567890
 Date of Birth :  24 | 4 | 2004
 Data Stored Successfully ;)
 Run again(1. Y, 2. N) : 1

 ******** MENU ********
 1. Store Data
 2. Retrieve Data
 Enter Choice : 2
Harshal_Patil
1234567890
24 | 4 | 2004

 Run again(1. Y, 2. N) : 2*/