// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 5

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,c[10][10],m,t[10][10];
	
	printf("\n Enter Matrix A\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Element of Matrix A %d%d : ",i+1,j+1);		
			scanf("%d",&a[i][j]);
			t[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("\n Enter Matrix B\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Element of Matrix B %d%d : ",i+1,j+1);		
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("\n Entered Matrix A is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}		
	printf("\n Entered Matrix B is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);	
		}
		printf("\n");
	}
	printf("\n Sum of Matrix A and B is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];	
			printf("%d\t",c[i][j]);
					
		}
		printf("\n");
	}
	printf("\n Multiplicaion of Matrix A and B is : \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=0;
		for(m=0;m<3;m++)
		{	
			c[i][j]=c[i][j]+a[i][m]*b[m][j];
			
		}
		printf("%d\t",c[i][j]);		
		}
		printf("\n");
	}
	printf("\n Transpose of Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d\t",t[i][j]);	
		}
		printf("\n");
	}


return 0;
}

/* Enter Matrix A

 Enter Element of Matrix A 11 : 1

 Enter Element of Matrix A 12 : 2

 Enter Element of Matrix A 13 : 3


 Enter Element of Matrix A 21 : 4

 Enter Element of Matrix A 22 : 5

 Enter Element of Matrix A 23 : 6


 Enter Element of Matrix A 31 : 7

 Enter Element of Matrix A 32 : 8

 Enter Element of Matrix A 33 : 9


 Enter Matrix B

 Enter Element of Matrix B 11 : 1

 Enter Element of Matrix B 12 : 2

 Enter Element of Matrix B 13 : 3


 Enter Element of Matrix B 21 : 4

 Enter Element of Matrix B 22 : 5

 Enter Element of Matrix B 23 : 6


 Enter Element of Matrix B 31 : 7

 Enter Element of Matrix B 32 : 8

 Enter Element of Matrix B 33 : 9


 Entered Matrix A is :
1       2       3
4       5       6
7       8       9

 Entered Matrix B is :
1       2       3
4       5       6
7       8       9

 Sum of Matrix A and B is :
2       4       6
8       10      12
14      16      18

 Multiplicaion of Matrix A and B is :
30      36      42
66      81      96
102     126     150

 Transpose of Matrix is :
1       4       7
2       5       8
3       6       9*/
