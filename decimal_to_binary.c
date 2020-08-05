#include <stdio.h>
//program to convert any decimal number into binary.
int main()
{
    int n;
    int rem;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[10];
    int i = 0;
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}