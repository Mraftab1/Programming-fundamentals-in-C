#include<stdio.h>
int main()
{
    int number;
    int product;
    int found =0;
    printf("Enter the number: ");
    scanf("%d", &number);
    for(int i=1; i<number; i++){
        product=i*(i+1)*(i+2);
        if (product==number){
            found=1;
            printf("The multiples are: %d*%d*%d", i, i+1, i+2);

        }


    }
    if (found==0){
        printf("No multiples in a series of three consective numbers.");
    }


    return 0;
}