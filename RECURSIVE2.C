#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    scanf("%d",&n);
    while(n)
     {
         r=n%2;
         if(r!=0)
         {
             printf("%d",n);
             break;
         }
         n=n/2;
     }
     getch();
}
