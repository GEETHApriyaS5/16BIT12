#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev,s=0;
scanf("%d",&n);
while(n)
{
rev=n%10;
s=s*10+rev;
n=n/10;
}
printf("%d",s);
getch();
}
