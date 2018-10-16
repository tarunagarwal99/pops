#include<stdio.h>
#include<conio.h>
void add(int *n);
int main()
{
int num=2;
clrscr();
printf(" \nthe value of num before calling the function=%d",num);
add(&num);
printf("\n the value of num after calling the function=%d",num);
getch();
return 0;
}
void add(int *n)
{
*n=*n+10;
printf("\n the value of num in calling the function=%d",*n);

}
