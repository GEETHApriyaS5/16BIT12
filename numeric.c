#include<stdio.h>
#include<conio.h>
void main()
{
    char a[10];
    int i,c=0,l=0;
    gets(a);
    while(a[i]!='\0')
    {
        c++;
        i++;
    }
    for(i=0;i<c;i++)
    {
        if(a[i]>='0' && a[i]<='9')
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
