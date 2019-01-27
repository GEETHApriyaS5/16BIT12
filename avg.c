#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,m=0,i,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   
     m=m+a[i];
    }
    avg=m/n;
    printf("%d",avg);
    getch();
}
