// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 7

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct c
{
	char name[50],city[50],g[10];
	char mobile[11];
};

int main()
{
	
	struct c cu[20];
	int i,n,ch,m=0,f=0,l,ch1;
	char ciname[20];
	
	printf("\n Enter Number of Customers : ");
	scanf("%d",&n);
	printf("\n Enter Customer Record ");
	printf("\n----------------------");
	for(i=1;i<=n;i++)
	{
		printf("\n Enter Customer %d Name : ",i);
		scanf("%s",cu[i].name);
		
		printf("\n Enter Customer Gender : ");
		scanf("%s",cu[i].g);
		
		l=strlen(cu[i].g);
		
		if(l==4)
		{
			m++;
		}
		else if(l==6)
		{
			f++;
		}
		
		printf("\n Enter Customer mobile : ");
		scanf("%s",cu[i].mobile);
		
		printf("\n Enter Customer City : ");
		scanf("%s",cu[i].city);
		printf("\n--------------------------");
			
	}
	do
	{
	
	printf("\n Choose any Option ");
	printf("\n 1. List of customers with all the Details\n 2. List of Customers and their Mobile Numbers\n 3. List of Customers from a Given City\n 4. Number of Male and Female Customers ");
	printf("\n Enter Your Choice : ");
	scanf("%d",&ch);
	printf("\n--------------------------");
	if(ch==1)
	{
	for(i=1;i<=n;i++)
	{
		
		printf("\n Customer Name : %s",cu[i].name);
		printf("\n Customer Gender : %s ",cu[i].g);
		printf("\n Customer Mobile : %s ",cu[i].mobile);
		printf("\n Customer City : %s",cu[i].city);
		printf("\n--------------------------");
	}
	}
	else if(ch==2)
	{
		for(i=1;i<=n;i++)
		{
			printf("\n Customer Name : %s",cu[i].name);
			printf("\n Customer Mobile : %s ",cu[i].mobile);
		}
		
	}
	else if(ch==3)
	{
		printf("\n  Enter City Name to find : ");
		scanf("%s",ciname);
		for(i=1;i<=n;i++)
		{
		if(strcmp(cu[i].city,ciname==0))
		{
				printf("\n Customer Name from %s : %s",ciname,cu[i].name);			
		}
		}
	}
	else if(ch==4)
	{
		printf("\n Number of Male Customers are : %d ",m);
		printf("\n Number of Female Customers are : %d ",f);
	}
	else
	{
		printf("\n Invalid Choice ");
	}
	printf("\n Do you want to Continue\n1. Yes\n2. No \n ");
	scanf("%d",&ch1);
	}
	while(ch1==1);
	return 0;
}

/* Enter Number of Customers : 3

 Enter Customer Record
----------------------
 Enter Customer 1 Name : harshal 

 Enter Customer Gender : male

 Enter Customer mobile : 1212121212

 Enter Customer City : nashik

--------------------------
 Enter Customer 2 Name : mahesh

 Enter Customer Gender : male

 Enter Customer mobile : 2323232323

 Enter Customer City : pune

--------------------------
 Enter Customer 3 Name : mansi

 Enter Customer Gender : female

 Enter Customer mobile : 4545454545

 Enter Customer City : nashik

--------------------------
 Choose any Option
 1. List of customers with all the Details
 2. List of Customers and their Mobile Numbers
 3. List of Customers from a Given City
 4. Number of Male and Female Customers
 Enter Your Choice : 1

--------------------------
 Customer Name : harshal
 Customer Gender : male
 Customer Mobile : 1212121212
 Customer City : nashik
--------------------------
 Customer Name : mahesh
 Customer Gender : male
 Customer Mobile : 2323232323
 Customer City : pune
--------------------------
 Customer Name : mansi
 Customer Gender : female
 Customer Mobile : 4545454545
 Customer City : nashik
--------------------------
 Do you want to Continue
1. Yes
2. No
 1

 Choose any Option
 1. List of customers with all the Details
 2. List of Customers and their Mobile Numbers
 3. List of Customers from a Given City
 4. Number of Male and Female Customers
 Enter Your Choice : 4

--------------------------
 Number of Male Customers are : 2
 Number of Female Customers are : 1
 Do you want to Continue
1. Yes
2. No
 2*/	
