#include<stdio.h>
#include<string.h>

void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int temp=0;
        char string[10];
        scanf("%s",&string);

        for(int i=0;i<strlen(string);i++)
        {
       if(string[i]<string[i+1])
        {      
            if(string[i]=='I')
            {
                temp=temp+1;
            }
            else if(string[i]=='V')
            {
                temp=temp+5;
            }
            else if(string[i]=='X')
            {
                temp=temp+10; 
            }
            else if(string[i]=='L')
            {
                temp=temp+50;
            }
            else if(string[i]=='C')
            {
                temp=temp+100;
            }
            else if(string[i]=='V')
            {
                temp=temp+500;
            }
            else if(string[i]=='V')
            {
               temp=temp+1000; 
            }
        }
        else
        {
            if(string[i]=='I')
            {
                temp=temp-1;
            }
            else if(string[i]=='V')
            {
                temp=temp-5;
            }
            else if(string[i]=='X')
            {
                temp=temp-10; 
            }
            else if(string[i]=='L')
            {
                temp=temp-50;
            }
            else if(string[i]=='C')
            {
                temp=temp-100;
            }
            else if(string[i]=='V')
            {
                temp=temp-500;
            }
            else if(string[i]=='V')
            {
               temp=temp-1000; 
            }
        }

        }
        printf("%d",temp);
    }
}