#include<stdio.h>
// determining GCD through the recursive method:
int gcd(int, int );
int main()
{
    int number1;
    int number2;
    printf("Enter the number 1: ");
    scanf("%d", &number1);

    printf("Enter the number 2: ");
    scanf("%d", &number2);

    printf("%d", gcd(number1,number2));

}
int gcd(int a, int b)
{
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}