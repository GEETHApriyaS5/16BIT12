#include<stdio.h>
#include<conio.h>
void main()
{
    char a[200];
    int i,c=0,l=0,d=0,j=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {    c=1;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='\0';
            }
        }
        if(c==1)
        {
            printf("%c",a[i]);
            
        }
    }
    getch();
}
