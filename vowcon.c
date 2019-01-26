#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
ch=getchar();
if(ch>='a' && ch<='z')
{
if(ch=='a' && ch=='e' && ch=='i' && ch=='o' && ch=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}}
else
{
printf("invalid");
}
getch();
}
