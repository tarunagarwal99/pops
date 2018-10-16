#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int n,r;
float result;
clrscr();
printf("\n enter the value of n and r:");
scanf("\n %d %d",&n,&r);
result=(float)fact(n)/fact(r);
printf("\np(n/r):p(%d)/(%d)=%f",n,r,result);
getch();
return 0;
}
int fact(int num)
{
int f=1,i;
for(i=num;i>=1;i--)
f=f*i;
return f;
}