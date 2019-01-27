#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1 ,b=1,n,i,c=0;
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;b=c;
        printf("%d",c);
    }
    getch();
}
