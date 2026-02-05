#include<stdio.h>
int main()
{   int number;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    printf("%d   ",number/10000%10);
    printf("%d   ",number/1000%10);
    printf("%d   ",number/100%10);
    printf("%d   ",number/10%10);
    printf("%d   ",number/1%10);
    return 0;
}