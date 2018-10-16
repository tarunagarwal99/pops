#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int n,r;
float result;
clrscr();
printf("\n enter the value of n :");
scanf("%d ",&n);
printf("\n enter the value of r:");
scanf("%d",&r);
result=(float)fact(n)/fact(r)*fact(n-r);
printf("\n result=%f",result);
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
