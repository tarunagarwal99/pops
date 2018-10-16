#include<stdio.h>
#include<conio.h>
void swapcallbyvalue(int a ,int b);
void swapcallbyreference(int *c,int *d);
int main()
{
int a=1,b=2,c=3,d=4;
clrscr();
printf("\n the value of a=%d and b=%d in main function:",a,b);
swapcallbyvalue(a,b);
printf("\n the value of a=%d and b=%d in main funcion:",a,b);
printf("\n the value of c=%d and d=%d in main function:",c,d);
swapcallbyreference(&c, &d);
printf("\n the value of c=%d and d=%d in main function:",c,d);
getch();
return 0;
}
void swapcallbyvalue(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("\n in function call by value method a=%d and b=%d",a,b);
}
void swapcallbyreference(int *c,int *d)
{
int temp;
temp=*c;
*c=*d;
*d=temp;
printf("\n in function by call by reference method c=%d and d=%d",*c,*d);
}


