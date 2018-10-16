#include<stdio.h>
#include<conio.h>
int sum(int a,int b);       //function declaration
int main()
{
int num1,num2,total=0;
clrscr();
printf("\n enter the value of first no:");
scanf("%d",&num1);
printf("\n enter the value of second no:");
scanf("%d",&num2);
total=total+sum(num1,num2);      //function calling
printf("\n total=%d",total);
getch();
return 0;
}

int sum(int a,int b)     //function defination
{
int result;
result=a+b;
//printf("\n result=%d",result);
return result;
}
