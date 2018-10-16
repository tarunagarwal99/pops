#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,arr[20],small,pos;
clrscr();
printf("\n enter the number of element in array:");
scanf("%d",&n);
printf("\n enter the element:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
small=arr[0];
pos=0;
for(i=0;i<n;i++)
{
if(arr[i]<small)
{
small=arr[i];
pos=i;
}
}
printf("\n the smallest number is=%d",small);
printf("\n the position  of smallest number is=%d",pos);
//return 0;
getch();
}
