#include<stdio.h>
#include<conio.h>
void main()
{
int l,w,h,a,v;
scanf("%d%d%d",&l,&w,&h);
a=2*l*w+2*w*h+2*l*h;
printf("%d",a);
v=l*w*h;
printf("%d",v);
getch();
}
