#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n-1;i<n+1;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    getch();
}
