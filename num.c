#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=0 || a[i]<=9)
{
printf("%c",a[i]);
}
}
getch();
}
