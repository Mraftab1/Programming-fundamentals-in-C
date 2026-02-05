#include<stdio.h>
int main()
{
    int number;
    int square;
    int found=0;
    printf("Enter the number (or press -1 to exit the program): ");
    scanf("%d", &number);
    while(number!=-1){
        for(int i=1; i<=number; i++){
        square=i*i;
        if(square==number){

            found=1;
            printf("This is complete square: %d*%d\n", i,i);
            break;
        }
    }
    if(found==0){
        printf("The given number is not a complete square.\n");
    }
    printf("Enter the number (or press -1 to exit the program): ");
    scanf("%d", &number);

    }

    return 0;
}