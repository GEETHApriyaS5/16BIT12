#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,c=0,s=0;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='.')
        {
            c++;
        }
    i++;
    }
    
   // printf("%d",c);
    s=c+1;
    printf("%d",s);
    getch();
}
