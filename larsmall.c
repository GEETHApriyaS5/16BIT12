#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,min,max,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {    min=a[0];
        if(a[i]<min)
        {
            min=a[i];
        }
        max=a[0];
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d%d",min,max);
    getch();
}
