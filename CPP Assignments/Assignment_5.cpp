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
    int ch;
    Complex ob1;
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
    
    return 0;
}