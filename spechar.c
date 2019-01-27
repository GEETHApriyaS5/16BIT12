#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,c=0,s=0,n=0;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='0' && a[i]<='9' )
        {
            c++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            s++;
        }
        else
        {
            n++;
        }
    i++;
    }
    
   // printf("%d",c);
    printf("%d",n);
    getch();
}
