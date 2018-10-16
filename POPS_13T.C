#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int n ,f,i;
float result=0.0;
clrscr();
printf("\n enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=fact(i);
result=result+1/(float)f;
}
printf("\n the sum of the series 1/1!+1/2!+1/3!....=%.1f",result);
getch();
return 0;
}
int fact(int num)
{
int f=1,i;
for(i=num;i>=1;i++)
f=f*i;
return f;
}
