#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,r,c=0;
    scanf("%[^\n]",a);
    while(a[i]!='\0')
    {
     c++;
     i++;
    }
r=c/2;
a[r]='*';
for(i=0;i<c;i++)
{
    printf("%c",a[i]);
}
getch();
}
