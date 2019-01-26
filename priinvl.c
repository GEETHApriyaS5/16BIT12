#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,c=1,j;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {    c=1;
        for(j=2;j<i-1;j++)
        {
        if(i%j==0)
        {
            c=0;
            break;
        }}
        if(c)
        {
            printf("%d",i);
        }
    }
    getch();
}
