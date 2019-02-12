#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,p=1;
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
p=p*n;
}
printf("%d",p);
getch();
}
