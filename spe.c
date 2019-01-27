#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,c=1;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>=0 &&a[i]<=9 || a[i]=='@' ||a[i]=='#' ||a[i]=='!')
        {
            c=0;
        }
    }
    if(c=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
