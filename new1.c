#include <stdio.h>

void update(int *a,int *b) {
    int sum=(*a)+(*b); 
    int absoluteDiff=(*a>*b)?(*a-*b):(*b-*a);
    *a=sum;
    *b=absoluteDiff;
}

int main() {
   // int a, b;
   //int *pa = &a, *pb = &b;
   int pa ,pb;
    printf("enter the value of a and b:");
    scanf("%d %d", &pa, &pb);
    update(&pa, &pb);
    printf("%d\n%d", pa,pb);

    return 0;
}