#include<stdio.h>
#include<conio.h>
void main()
{
    int a,d,n,sum=0,t,i;
    scanf("%d%d%d",&a,&d,&n);
    t=a+(n- 1)*d;
    sum=(n*(2*a+(n-1)*d))/2;
    for(i=a;i<=t;i=i+d)
    {
        if(i!=t)
        {
          //  printf("%d",i);
            
        }
        else
        printf("%d",sum);
    }
    getch();
}
