#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i=0,l=0,f=1;
clrscr()
puts("enter any string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("the numberof character in the string are%d",l);
for(i=0;i<=l-1;i++)
{
if(str[i]==' ')
{
f=f+1;
}
}
printf("the number of words in the string are%d",f);
getch();
}
