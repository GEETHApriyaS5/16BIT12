#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,m=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  m=a[0];
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
    getch();
    
}
