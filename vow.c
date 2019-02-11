#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,c=0;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' || a[i]=='u')
{
c++;
}}
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
