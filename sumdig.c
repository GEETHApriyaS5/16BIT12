#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r,sum=0;
   scanf("%d",&n);
   while(n)
   {
       r=n%10;
       sum=sum+r;
       n=n/10;
   }
   printf("%d",sum);
   getch();
}
   
