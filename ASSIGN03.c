// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 3

#include<stdio.h>
#include<math.h>
int main()
{
	float n,max,min,marks;
	int i,c=0;
	
	printf("\n ENTER NO OF STUDENTS : ");
	scanf("%f",&n);
	printf("\n ENTER MARKS OF STUDENT 1 : ");
	scanf("%f",&marks);
	if(marks>40)
	{
		c++;
	}
	max=marks;
	min=marks;

	for(i=1;i<n;i++)
	{
			printf("\n ENTER MARKS OF STUDENT %d : ",i+1);
	        scanf("%f",&marks);
			if(marks>40)
			{
				c++;
			}
	        if(marks>max)
	        {
	        	max=marks;
	        }
	        else if(marks<min)
	        {
	        	min=marks;
	        }
	}	
	printf("\n Maxmimum Marks are : %.1f",max);
	printf("\n Minimum Marks are  : %.1f",min);
	printf("\n No of Students Passed in Exam : %d",c);
	
	return 0;	
}

/*ENTER NO OF STUDENTS : 3

 ENTER MARKS OF STUDENT 1 : 20

 ENTER MARKS OF STUDENT 2 : 80

 ENTER MARKS OF STUDENT 3 : 50

 Maxmimum Marks are : 80.0
 Minimum Marks are  : 20.0
 No of Students Passed in Exam : 2*/

