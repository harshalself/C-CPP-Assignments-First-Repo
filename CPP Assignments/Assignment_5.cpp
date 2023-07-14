// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 5
// PROBLEM STATEMENT : Write a C++ program to implement a class Complex which represents the Complex Number data type. Implement the following 1. Constructor (including a default constructor which creates the complex number 0+0i). 2. Overload operator+ to add two complex numbers. 3. Overload operator* to multiply two complex numbers 

#include<iostream>
using namespace std;
class Complex
{
    private :
    int real,imag;

    public :
    Complex()
    {
        real=0;
        imag=0;
    }
  /*Complex(int r,int i)
    {
        real=r;
        imag=i;
    }*/  
    void getdata()
    {
        cout<<"\n Enter Real Part : ";
        cin>>real;
        cout<<" Enter Imaginary Part : ";
        cin>>imag;
    }      
    void show()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
    Complex operator +(Complex & ob4)
    {
        Complex res;
        res.real=real+ob4.real;
        res.imag=imag+ob4.imag;
        return res;
    }
    Complex operator *(Complex & ob5)
    {
        Complex res;
        res.real=((real*ob5.real)-(imag*ob5.imag))*(-1);
        res.imag=(real*ob5.imag)+(imag*ob5.real);
        return res;
    }
};
int main()
{
    int ch,ch1;
    Complex ob1;
    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";
    do
    {

    cout<<"\n Enter First Complex Number ";
    ob1.getdata();
    Complex ob2;
    cout<<"\n Enter Second Complex Number ";
    ob2.getdata();
        Complex ob3;
        Complex ob6;

    cout<<"\n ****Menu**** \n 1.Add \n 2.Multiply";
    cout<<"\n Enter Operation to Perform : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"\n First Complex Number : ";
        ob1.show();
        cout<<"\n Second Complex Number : ";
        ob2.show();
        ob3=ob1+ob2;
        cout<<"\n Addition of Complex Numbers : ";
        ob3.show();
        break;

        case 2:
        cout<<"\n First Complex Number : ";
        ob1.show();
        cout<<"\n Second Complex Number : ";
        ob2.show();
        ob6=ob1*ob2;
        cout<<"\n Multiplication of Complex Numbers : ";
        ob6.show();
        break;
        
        default :
        cout<<"\n Invalid Choice ";
        break;;
    }
        cout<<"\n Run again(1. Y, 2. N) : ";
        cin>>ch1;

    } while (ch1==1);
    
    return 0;
}
// OUTPUT

/*
 WELCOME TO HARSHAL's ASSIGNMENT
 Enter First Complex Number
 Enter Real Part : 1
 Enter Imaginary Part : 2

 Enter Second Complex Number
 Enter Real Part : 3
 Enter Imaginary Part : 4

 ****Menu****
 1.Add
 2.Multiply
 Enter Operation to Perform : 1

 First Complex Number : 1 + i2

 Second Complex Number : 3 + i4

 Addition of Complex Numbers : 4 + i6

 Run again(1. Y, 2. N) : 1

 Enter First Complex Number
 Enter Real Part : 2
 Enter Imaginary Part : 4

 Enter Second Complex Number
 Enter Real Part : 5
 Enter Imaginary Part : 6

 ****Menu****
 1.Add
 2.Multiply
 Enter Operation to Perform : 2

 First Complex Number : 2 + i4

 Second Complex Number : 5 + i6

 Multiplication of Complex Numbers : 14 + i32

 Run again(1. Y, 2. N) : 1

 Enter First Complex Number
 Enter Real Part : 34
 Enter Imaginary Part : 35

 Enter Second Complex Number
 Enter Real Part : 2
 Enter Imaginary Part : 2

 ****Menu****
 1.Add
 2.Multiply
 Enter Operation to Perform : 3

 Invalid Choice
 Run again(1. Y, 2. N) : 2*/
