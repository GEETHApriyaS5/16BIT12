#include<stdio.h>
#include<conio.h>
void main()
{
    int min,h;
    scanf("%d",&min);
    if(min!=0)
    {
        h=min/60;
        printf("%d",h);
        min=min%60;
        printf("%d",min);
    }
    getch();
}
