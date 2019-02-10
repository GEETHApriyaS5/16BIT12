#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r==0 || r==1)
        {
            c++;
        }
        n=n/10;
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
