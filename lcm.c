#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,m;
    scanf("%d%d",&a,&b);
    if(a>b)
    m=a;
    else
    m=b;
    while(1)
    {
        if(m%a==0 && m%b==0)
        {
            printf("%d",m);
            break;
        }
    }
    getch();
}
