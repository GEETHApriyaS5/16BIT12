#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    ch=getchar();
    if(ch>='a' && ch<='z')
    {
        printf("alphabet");
    }
    else
    {
        printf("no");
    }
    getch();
}
