#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,arr[20],temp;
int large,large_pos;
int small,small_pos;
clrscr();
printf("\n enter the number of element in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
small=arr[0];
small_pos=0;
large=arr[0];
large_pos=0;
for(i=0;i<n;i++)
{
if(arr[i]<small)
{
small=arr[i];
small_pos=i;
}
if(arr[i]>large)
{
large=arr[i];
large_pos=i;
}
}
printf("\n the smallest number is=%d",small);
printf("\n the position of smallest number is=%d",small_pos);
printf("\n the largest number is=%d",large);
printf("\n th position of largest element is=%d",large_pos);
temp=arr[large_pos];
arr[large_pos]=arr[small_pos];
arr[small_pos]=temp;
printf("\n the new array is:");
for(i=0;i<n;i++)
printf("%d",arr[i]);
getch();
}
