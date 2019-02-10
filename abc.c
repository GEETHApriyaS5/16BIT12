#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    r=(a*b)%c;
    printf("%d",r);
    getch();
}
