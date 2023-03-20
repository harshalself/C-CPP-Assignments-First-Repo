// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 8

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("L:\\Programs\\C-Assignments-First-Repo\\harsh.txt","r");
    char ch;
    int l=0,w=0,c=0;
    
    if(fp==NULL)
    {
        printf("\n Unable to Open File");
        exit(1);
    }

    while((ch=fgetc(fp)!=EOF))
    {
        if(ch==' ' || ch=='\n' || ch=='\t' || ch=='\0')
        {
            w++;
        }
        if(ch=='\n' || ch=='\0')
        {
            l++;
        }   
        c++;
    
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