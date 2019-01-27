#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d%d",a,b);
    getch();
}
void swap(int *a,int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
