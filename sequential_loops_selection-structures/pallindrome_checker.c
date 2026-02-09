#include<stdio.h>
int main()
{
    int num,num1,no,reverse;
    reverse=0;
    printf("Enter a five_digit number: ");
    scanf("%d",&num);
    num1=num;
    while(num1!=0)
    {
        no=num1%10;
        reverse=(reverse*10)+no;
        num1=num1/10;
    }
    if(num==reverse)
        printf("This is a palindrom.");
    else
        printf("Not a palindrom.");
    return 0;

}