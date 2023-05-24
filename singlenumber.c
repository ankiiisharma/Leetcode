#include<stdio.h>
void main{
    int n;
    int count=0;

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[0+i]==a[i])
        {
            count = count +1;
        }
        if(count==1)
        {
            printf("%d",a[i]);
        }
    }
    
}