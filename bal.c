#include<stdio.h>
#include<conio.h>
void main()
{
    char a[200];
    int i,c=0,l=0,d=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            c++;
        }
        if(a[i]=='[')
        {
            l++;
        }
        if(a[i]=='{')
        {
            d++;
        }
        if(a[i]==')')
        {
            c--;
        }
        if(a[i]==']')
    {
        l--;
    }
    if(a[i]=='}')
    {d--;
    }}
    if(c==0 && l==0 && d==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
