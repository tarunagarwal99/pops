#include<stdio.h>
#include<conio.h>
int checkrelation(int a,int b);
int main()
{
int a=4,b=5,res;
clrscr();
res=checkrelation(a,b);
if(res==0)
printf("\n equal:");
if(res==2)
printf("\n a is greater than b:");
if(res==-2)
printf("\n b is greater than a:");
getch();
return 0;
}
int checkrelation(int a,int b)
{
if(a==b)
return 0;
else if(a>b)
return 2;
else
return -2;
}