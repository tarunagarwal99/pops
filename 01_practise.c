#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;   //syntax for generating random number from 1 to 100.
    printf("the random number generated is :%d",number);

     return 0;
}