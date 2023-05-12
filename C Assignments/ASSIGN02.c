// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 2

#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3,a,s;
	
	printf("\n ENTER SIDE 1 : ");
	scanf("%f",&s1);
	printf("\n ENTER SIDE 2 : ");
	scanf("%f",&s2);
	printf("\n ENTER SIDE 3 : ");
	scanf("%f",&s3);
	
		
	if(s1==s2 && s2==s3)
	{
		printf("\n Triangle is a EQUILATERAL TRIANGLE ");
	}
	else if(s1==s2 || s2==s3 || s1==s3) 
	{
		printf("\n Triangle is a ISOCELES TRIANGLE ");
	}
	else if(s1*s1==(s2*s2)+(s3*s3) || s2*s2==(s1*s1)+(s3*s3) || s3*s3==(s1*s1)+(s2*s2)) 
	{
		printf("\n Triangle is a RIGHT ANGLED TRIANGLE ");
	}
	else
	{
		printf("\n Triangle is a SCALENE TRIAGNLE ");
		
	}
	printf("\n PERIMETER = %2f",s1+s2+s3);
	s=(s1+s2+s3)/2;
	a=sqrt((s*(s-s1)*(s-s2)*(s-s3)));
	printf("\n AREA = %2f",a);
	
	return 0;	
}


/* ENTER SIDE 1 : 3

 ENTER SIDE 2 : 4

 ENTER SIDE 3 : 5

 Triangle is a RIGHT ANGLED TRIANGLE 
 PERIMETER = 12.000000
 AREA = 6.000000 */
