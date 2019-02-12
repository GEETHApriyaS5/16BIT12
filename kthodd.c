#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,i,a[100],m;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<k;k++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                m=a[i];
            }
        }
    
    printf("%d",m);
    }
    getch();
}
