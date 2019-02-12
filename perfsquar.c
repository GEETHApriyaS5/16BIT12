#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n,f=0,i;
    scanf("%d%d",&a,&b);
    n=a*b;
    for(i=0;i<n;i++)
    {
        if(n==i*i)
        {
            f++;
        }
    }
    if(f>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    
    getch();
}
