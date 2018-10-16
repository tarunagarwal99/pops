#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,arr[20],large,pos;
clrscr();
printf("\n enter the number of element in array:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
large=arr[0];
pos=0;
for(i=0;i<n;i++)
{
if(arr[i]>large)
{
large=arr[i];
pos=i;
}
}
printf("\n the largest number is=%d",large);
printf("\n the position of the largest number is=%d",pos);
getch();
}

