#include<stdio.h>
#include<conio.h>
float cal_area(float r);
int main()
{
float area,radius;
clrscr();
printf("\n enter the radius:");
scanf("\n %f",&radius);
area=cal_area(radius);
printf("\n area of circle with radius%f=%f",radius,area);
getch();
return 0;
}
float cal_area(float radius)
{
return(3.14*radius*radius);
}