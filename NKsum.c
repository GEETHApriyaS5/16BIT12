#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,k,i,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}
