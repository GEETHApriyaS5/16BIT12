#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i+=2)
{
printf("%c",a[i]);
}
for(i=1;a[i]!='\0';i+=2)
{
printf("%c",a[i]);
}
getch();
}
