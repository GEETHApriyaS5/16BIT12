#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],temp;
int i=0,c=0,j=0;
scanf("%[^\n]",a);
while(a[i]!='\0')
{
c++;
i++;
}
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
printf("%c",a[i]);
}
getch();
}
