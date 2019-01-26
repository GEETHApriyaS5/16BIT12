#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,i,c=0,a,t;
    scanf("%d",&a);
    n=a;
    t=a;
    while(n)
    {  
        n=n/10;
        c++;
        
    }
    printf("%d",c);
    while(t)
    {
        r=t%10;
        
        sum=sum+pow(r,c);
        t=t/10;
        
    }
    if(sum==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
