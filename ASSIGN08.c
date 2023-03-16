// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 8

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("L:\\Programs\\harsh.txt","r");
    char ch;
    int l=0,w=0,c=0;

    while(1)
    {
    ch=fgetc(fp);
    if(ch==EOF)
    {
        break;
    }
    else
    {
        if(ch==' ')
        {
            w++;
        }
        if(ch=='\n')
        {
            l++;
        }
        else
        {   
            c++;
        }
    }
    }
    
    printf("\n Lines : %d",l);
    printf("\n Character : %d",c);
    printf("\n Words : %d",w);
    
    fclose(fp);

return 0;
}

/* Lines : 2
 Character : 67
 Words : 12*/