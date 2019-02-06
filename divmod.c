#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char s;
    scanf("%d%c%d",&a,&s,&b);
    if(s=='/' )
    {
        printf("%d",a/b);
    }
    else if(s=='%')
    {
        printf("%d",a%b);
    }
    else
    {
        printf("invalid");
    }
    getch();
}
