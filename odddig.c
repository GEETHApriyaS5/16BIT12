#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=0,r,a[100],c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r%2!=0)
        {
            a[i]=r;
            i++;
            c++;
        }
        n=n/10;
        
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    
    getch();
    
}
