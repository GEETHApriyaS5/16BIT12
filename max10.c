#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,m=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    { m=a[0];
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
    getch();
}
