#include<stdio.h>
void leftRotateByOne(int arr[], int n);
void leftRotate(int arr[], int d, int n) {
    int i;
    for (i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }

}
void leftRotateByOne(int arr[], int n) {
    int temp=arr[0], i;
    for (i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
      //  arr[i]=temp;
    }
     arr[i]=temp;

}
void display(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }


}


int main() {

    int arr[]={ 10,20,30,40,50,60,70};
    leftRotate(arr, 2, 5);
    display(arr, 5);
    return 0;
}