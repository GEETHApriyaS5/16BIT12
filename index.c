#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
        printf("\t%d%d",a[j],j);
    }
    getch();
}
