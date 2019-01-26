#include<stdio.h>
#include<conio.h>
void main()
{
    int n,p,i,s=1;
    scanf("%d%d",&n,&p);
    for(i=0;i<p;i++)
    {
        s=s*n;
    }
    printf("%d",s);
    getch();
    
}
