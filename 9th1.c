#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,c=0,b,r;
    scanf("%d",&b);
    n=b;
    while(n)
    {
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        r=b%10;
        a[i]=r;
        b=b/10;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
