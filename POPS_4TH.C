#include<stdio.h>
#include<conio.h>
int add(int n);
int main()
{
int num=2;
clrscr();
printf("\n the value of num before calling the function:=%d",num);
num=add(num);
printf("\n the value of num after calling the function:=%d",num);
getch();
return 0;
}
int add(int n)
{
n=n+10;
printf("\n the value of num in the called function:=%d",n);
return n;
}