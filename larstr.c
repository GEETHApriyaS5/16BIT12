#include<stdio.h>
#include<conio.h>
void main()
{
    char a[200],b[100];
    int i,j,c=0,l=0;
    gets(a);
    gets(b);
    c=strlen(a);
    l=strlen(b);
    if(c==l)
    {
        printf("%s",a);
    
    }
    else if(c>l)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
getch();    
}
