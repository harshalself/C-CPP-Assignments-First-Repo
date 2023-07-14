// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 6
// PROBLEM STATEMENT : Write a C++ program to make operations for a publishing company which does marketing for book and audio cassette versions. Create a classpublication that stores the title (a string) and price (type float) of publications. From this class derive two classes: book which adds a page count (type int) and tape which adds a playing time in minutes (type float). Write a program that instantiates the book and tape class, allows users to enter data and displays the data members. If an exception is caught, replace all the data member values with zero values. Use virtual functions

#include <iostream>
using namespace std;
class publication
{
protected:
    string name;
    float price;

public:
    void getdata()
    {
        cout << "\n Enter Title : ";
        cin >> name;

        cout << "\n Enter Price : ";
        cin >> price;
    }
    void putdata()
    {
        cout << "\n Title : " << name;
        cout << "\n Price : " << price;
    }
};
class book : public publication
{
private:
    int count = 0;

public:
    void getdata1()
    {
        cout << "\n Enter Page Count : ";
        cin >> count;

        try
        {
            if(count==0)
            {
                throw count;
            }
        }    
            catch(int count)
            {
                cout<<"\n Page Count cannot be 0 ";
            }
    }
    void putdata1()
    {
        cout<<"\n Page Count : "<<count;
    }
};
class tape : public publication
{
    private:
    int time = 0;

    public:
    void getdata2()
    {
        cout << "\n Enter Play Time : ";
        cin >> time;

       try
        {
            if(time==0)
            {
              throw time;
            }
        }    
            catch(int time)
            {
                cout<<"\n Play Time cannot be 0 ";
            }
    }
    void putdata2()
    {
        cout<<"\n Play Time : "<<time;
    } 
};

int main()
{
    int ch,ch1;
    book obj1;
    tape obj2;
    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";
    do
    {
    cout<<"\n Menu \n 1. Fill Book Data \n 2. Display Book Data \n 3. Fill Tape Data \n 4. Display Tape Data \n 5. Exit";
    cout<<"\n Enter Choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        obj1.getdata();
        obj1.getdata1();
        break;
    case 2:
        obj1.putdata();
        obj1.putdata1();
        break;
    case 3:
        obj1.getdata();
        obj2.getdata2();
        break;
    case 4:
        obj1.putdata();
        obj2.putdata2();
        break;
    case 5:
        cout<<"\n Exiting...";
        break;

    default:
        break;
    }
    cout<<"\n Do you want to continue(1.yes 2.no) : ";
    cin>>ch1;
    }while(ch1==1);

    return 0;
}
// OUTPUT

/* 
 WELCOME TO HARSHAL's ASSIGNMENT
 Menu
 1. Fill Book Data
 2. Display Book Data
 3. Fill Tape Data
 4. Display Tape Data
 5. Exit
 Enter Choice : 1

 Enter Title : Harshal_Patil

 Enter Price : 1000

 Enter Page Count : 500

 Do you want to continue(1.yes 2.no) : 1

 Menu
 1. Fill Book Data
 2. Display Book Data
 3. Fill Tape Data
 4. Display Tape Data
 5. Exit
 Enter Choice : 2

 Title : Harshal_Patil
 Price : 1000
 Page Count : 500
 Do you want to continue(1.yes 2.no) : 1

 Menu
 1. Fill Book Data
 2. Display Book Data
 3. Fill Tape Data
 4. Display Tape Data
 5. Exit
 Enter Choice : 3

 Enter Title : ABC_Tape

 Enter Price : 200

 Enter Play Time : 350

 Do you want to continue(1.yes 2.no) : 1

 Menu
 1. Fill Book Data
 2. Display Book Data
 3. Fill Tape Data
 4. Display Tape Data
 5. Exit
 Enter Choice : 4

 Title : ABC_Tape
 Price : 200
 Play Time : 350
 Do you want to continue(1.yes 2.no) : 1

 Menu
 1. Fill Book Data
 2. Display Book Data
 3. Fill Tape Data
 4. Display Tape Data
 5. Exit
 Enter Choice : 5

 Exiting...
 Do you want to continue(1.yes 2.no) : 2*/