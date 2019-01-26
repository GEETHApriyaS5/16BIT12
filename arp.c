#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,d,r,sum=0,i,t;
    scanf("%d%d%d",&n,&a,&d);
   
   for(i=a;i<=n;i+=d)
   {
       sum=sum+i;
   }
   printf("%d",sum);
   
   getch();
    
}
