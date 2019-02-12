#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,flag=0;
   scanf("%d",&n);
   for(i=2;i<n-1;i++)
   {
       if(n%i==0)
       {
           flag=0;
       }
       else
       {
           flag=1;
       }
   }
if(flag==1)
{
    printf("yes");
}
else
{
    printf("no");
}
getch();
}
