#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,p;
    scanf("%d%d",&a,&b);
    p=a*b;
    if(p%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}
