#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,n,arr[20];
 clrscr();
 printf("\n enter the value of n:");
 scanf("%d",&n);
 printf(" \n enter the element:");
 for(i=0;i<n;i++)
 {
 printf("arr[%d]=",i);
 scanf("%d",&arr[i]);
 }
 printf("\n array element are:\n");
 for(i=0;i<n;i++)
 printf("\n %d=arr[i]",arr[i]);
 getch();
 }

