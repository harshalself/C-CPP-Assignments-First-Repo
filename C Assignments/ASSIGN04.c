// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 4

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[100],str2[100];
	int ch,len,value;

	do
	{
	printf("1. String Length\n2. String Copy\n3. String Concatination\n4. String Compare\n5. String Uppercase\n6. String Lowercase\nEnter your Choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
 	case 1:
        	 printf("\n Enter The String:");
        	 scanf("%s",str1);
        	 len=strlen(str1);
        	 printf("The Length of String is : %d",len);
        	 break;
         
 	case 2:      
        	printf("\n Enter STRING 1 : ");
        	scanf("%s",str1);
        	printf("\n Enter STRING 2 : ");
        	scanf("%s",str2);
        	strcpy(str2,str1);
        	puts(str2);
        	puts(str1);
        	break;
        
 	case 3:        
        	printf("\n Enter STRING 1 : ");
        	scanf("%s",str1);
        	printf("\n Enter STRING 2 : ");
        	scanf("%s",str2);
        	strcat(str2,str1);
        	puts(str2);
        	puts(str1);
        	break;
        case 4:        
        	printf("\n Enter STRING 1 : ");
        	scanf("%s",str1);
        	printf("\n Enter STRING 2 : ");
        	scanf("%s",str2);
        	value=strcmp(str1,str2);
        	if(value==0)
        	{
        		printf("\n String are Same ");
        	}
        	else
        	{
        		printf("\n String are Different ");
        	}
        	break;
        case 5:
        	 printf("\n Enter The String : ");
        	 scanf("%s",str1);
        	 strlwr(str1);
        	 printf("\nString in UPPRECASE is ");
        	 puts(str1);
        	 break;
        case 6:
        	 printf("\n Enter The String : ");
        	 scanf("%s",str1);
        	 strupr(str1);
        	 printf("\nString in LOWERCASECASE is ");
        	 puts(str1);
        	 break;	 
        	 
 	default :
        	  printf("\n Invalid Choice : ");
        	  break;
 	}
 	printf("\n Do You Want To Continue : ");
 	scanf("%d",&ch);
 	}
 	while(ch==1);
 
 	return 0;
}     

/*1. String Length
2. String Copy
3. String Concatination
4. String Compare
5. String Uppercase
6. String Lowercase
Enter your Choice : 1

 Enter The String:HARSHAL
The Length of String is : 7
 Do You Want To Continue : 1
1. String Length
2. String Copy
3. String Concatination
4. String Compare
5. String Uppercase
6. String Lowercase
Enter your Choice : 4

 Enter STRING 1 : HARSHAL

 Enter STRING 2 : PATIL

 String are Different
 Do You Want To Continue : 1
1. String Length
2. String Copy
3. String Concatination
4. String Compare
5. String Uppercase
6. String Lowercase
Enter your Choice : 3

 Enter STRING 1 : HARSHAL

 Enter STRING 2 : PATIL
PATILHARSHAL
HARSHAL

 Do You Want To Continue : 2*/
