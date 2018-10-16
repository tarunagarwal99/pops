#include<stdio.h>
#include<conio.h>
int greater(int a,int b,int c);
int main()
{
int num1,num2,num3,large;
clrscr();
printf("\n enter the first number:");
scanf("%d",&num1);
printf("\n enter the second number:");
scanf("%d",&num2);
printf("\n enter the third number:");
scanf("%d",&num3);
large=greater(num1,num2,num3);
printf("\n large=%d",large);
getch();
return 0;
}
int greater(int a,int b,int c)
{
if(a>b)
{
if(a>c)
printf("\n %d is greater then %d and %d:",a,b,c);
else
printf("\n %d is greater then %d and %d:",c,b,a);
}
else if(b>c)
printf("\n %d is greater then %d and %d:",b,a,c);
else
printf("\n %d is greater than %d and %d:",c,b,a);
return 0;
}

