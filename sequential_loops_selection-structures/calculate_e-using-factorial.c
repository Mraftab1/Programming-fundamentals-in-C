#include<stdio.h>
int main()
{
    double factorial;
    int i;
    int j;
    double exponent;
    exponent=1;
    i=2;
    while(i<=11){
        j=2;
        factorial=1;
        while(j<=i)
        {
            factorial=factorial*(j-1);
            j++;
        }
        exponent=(double)1/factorial+exponent;
        i++;
    }
    printf("The exponent is: %.10f", exponent);



    return 0;
}
