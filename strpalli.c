#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i=0,c=0,j=0,l=0;
scanf("%[^\n]",a);
while(a[i]!='\0')
{
c++;
i++;
}
for(i=c-1;i>=0;i--)
{
    j=0;
b[j]=a[i];
j++;
}
for(i=0;i<c;i++)
{
    if(a[i]==b[i])
    {
        l++;
    }
}
if(l==c)
{
    printf("yes");
}
else
{
    printf("no");
}
getch();
}
