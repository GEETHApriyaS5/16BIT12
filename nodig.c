#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
    getch();
}
