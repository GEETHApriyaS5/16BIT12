#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,n,c=0,l;
    scanf("%[^\n]",a);
    scanf("%d",&n);
    while(a[i]!='\0')
    {
        c++;
        i++;
    }
    l=c-n;
    for(i=l;i<c;i++)
    {
        printf("%c",a[i]);
    }
    getch();
}
