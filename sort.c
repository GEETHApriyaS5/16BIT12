#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,m=0,n,j,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  m=a[0];
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }}
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    }
    getch();
    
}
