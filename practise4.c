#include<stdio.h>
#include<string.h>
char reverse(char s[]){
    int c,i,j;
     for(i=0,j=strlen(s)-1;i<j;i++,j--) {
         c=s[i];
         s[i]=s[j];
         s[j]=c;
         
     }
    
}
int main(){
    char a[]="tarun";
   printf("String before reverse:%s",a);
    reverse(a);
   printf("String after reverse:%s",a);
    return 0;
}