#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int &zarr=arr;
    for(int i=0;i<=4;i++){
        arr[i]+=arr[i];

    }
    for(int i=0;i<4;i++){
        cout<<zarr[i];
    }
    return 0;
}
