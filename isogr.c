#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,j=0,c=0,l=0;
    scanf("%[^\n]",a);
    while(a[i]!='\0')
    {
        c++;
        i++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]==a[j])
            {
                l++;
            }
        }
    }
    if(l==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
