#include<stdio.h>
int main()
{   int number;
    double factorial;
    double exponent;
    int i;
    int j;
    double x;
    double original_x;
    printf("Enter the power of the exponent: ");
    scanf("%lf", &x);
    original_x=x;
    exponent=1.0;
    i=10;
    while(i>=1){
        factorial=i;
        number=i;
        while(number>1){
            number--;
            factorial=(double)factorial*number;

        }
        j=i;
        x=original_x;
        while(j>=1){
            if (j==1){
                x=x;
            }
            else{
                x=(double)x*original_x;
            }
            j--;

        }

        exponent=(double)x/factorial+exponent;
        i--;
    }

    printf("The exponent e is: %.10f", exponent);



    return 0;
}