#include<stdio.h>
 int returnmax(int array[],int n){
     int max=0;
     for (int i = 0; i < n; i++)
     {  
        if(array[i]>max){
            max=array[i];
        }
        
     }
     return max;
     
 }
int main(){
    int arr[]={1,5,67,890,7986.5678};
    int max=returnmax(arr,6);
    printf("the maximum number in array is:%d",max);

     return 0;
}