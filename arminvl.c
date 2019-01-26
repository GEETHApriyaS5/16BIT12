#include<stdio.h>
#include<conio.h>
void main()
{
    int n=0,r,sum=0,i,a,t=0,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
    n=i;
    t=i;
    while(n!=0)
    {  
        n=n/10;
        ++c;
        
    }
    //printf("%d",c);
    while(t!=0)
    {
        r=t%10;
        
        sum=sum+pow(r,c);
        t=t/10;
        
    }
    if(sum==i)
    {
        printf("%d",i);
    }
        sum=0;
        c=0;
    }
    
    
    getch();
}
