#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,i,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+1==k)
        {
            printf("%d",a[i]);
        }
    }
    getch();
    }
