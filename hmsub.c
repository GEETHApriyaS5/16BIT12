#include<stdio.h>
#include<conio.h>
void main()
{
    int h1,h2,m1,m2,r,r1;
    scanf("%d%d",&h1,&m1);
    scanf("%d%d",&h2,&m2);
    if(h1>h2)
    {
        r=h1-h2;
    }
    else
    {
        r=h2-h1;
    }
    if(m1>m2)
    {
        r1=m1-m2;
    }
    else
    {
        r1=m2-m1;
    }
    printf("%d%d",r,r1);
    getch();
}
