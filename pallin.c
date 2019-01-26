#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev=0,c;
    scanf("%d",&c);
    n=c;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(c==rev)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
