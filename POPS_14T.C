#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
int main()
{
int n,i,num,demo;
float sum=0.0;
clrscr();
printf("\n enter the value of n:");
scanf("\n %d",&n);
for(i=0;i<=n;i++)
{
num=pow(i,i);
demo=fact(i);
sum=sum+(float)num/demo;
}
printf("\n 1/1!+4/2!+2/3!+......=%.2f",sum);
getch();
return 0;
}
int fact(int n)
{
int f=1,i;
for(i=n;i>=1;i++)
f=f*i;
return f;
}
