// NAME : HARSHAL PATIL
// ROLL NO : 37
// ASSIGNMENT NO : 3
// PROBLEM STATEMENT : Write a C++ program to develop a program in C++ to create a database of a student's information system containing the following information: Name, Roll number, Class, Division, Date of Birth and Telephone number. Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor, destructor, count number of students

#include <iostream>
#include<string>
using namespace std;
class Student 
{
private:
	string name;
	string class_name;
	string division;
	string dob;
	long int telephone;

public:
	Student () 
    {
		name = "No Name";
		class_name = "No Class!";
		division = "No Div!";
		dob = "No Date!";
		telephone = 0000000000;
	}

	Student (string nm, string cn, string div, string date, long int tp) 
    {
		name = nm;
		class_name = cn;
		division = div;
		dob = date;
		telephone = tp;
	}

	Student (Student &another_student) 
    {
		name = another_student.name;
		class_name = another_student.class_name;
		division = another_student.division;
		dob = another_student.dob;
		telephone = another_student.telephone;
	}

	~Student () 
    {
		cout << "Destructor executed!" << endl;
	}

	void print_data() 
    {
		cout << "Name: " << name << endl;
		cout << "Class Name: " << class_name << endl;
		cout << "Division: " << division << endl;
		cout << "Date Of Birth: " << dob << endl;
		cout << "Telephone: " << telephone << endl;
	}
};
int main () 
{
    cout<<"\n WELCOME TO HARSHAL's ASSIGNMENT";
	cout << "Default Constructor: " << endl;
	Student databaseDefault;
	databaseDefault.print_data();
	cout << endl;

	cout << "Parameterized Constructor: " << endl;
	Student databaseParameterized("HARSHAL_PATIL", "B.Tech AI & DS", "B", "24/04/2004", 1234567890);
	databaseParameterized.print_data();
	cout << endl;

	cout << "Copy Constructor: " << endl;
	Student databaseCopy = databaseParameterized;
	databaseCopy.print_data();
	cout << endl;
}
//OUTPUT

/*
WELCOME TO HARSHAL's ASSIGNMENT
Default Constructor: 
Name: No Name
Class Name: No Class!
Division: No Div!
Date Of Birth: No Date!
Telephone: 0

Parameterized Constructor:
Name: HARSHAL_PATIL
Class Name: B.Tech AI & DS
Division: B
Date Of Birth: 24/04/2004
Telephone: 1234567890

Copy Constructor:
Name: HARSHAL_PATIL
Class Name: B.Tech AI & DS
Division: B
Date Of Birth: 24/04/2004
Telephone: 1234567890

Destructor executed!
Destructor executed!
Destructor executed!*/