#include<stdio.h>
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
