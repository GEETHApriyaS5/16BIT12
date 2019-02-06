#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[100],i,c=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c++;
}}
printf("%d",c);
getch();
}
