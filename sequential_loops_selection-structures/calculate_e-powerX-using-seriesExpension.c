#include <stdio.h>

int main()
{
    double number;
    double exponent = 1.0;   // first term = 1
    double factorial;
    double power;
    int i, j, k;

    printf("Enter the number: ");
    scanf("%lf", &number);

    i = 2;
    while (i <= 11)
    {
        // Calculate factorial (i-1)!
        factorial = 1.0;
        j = 2;
        while (j <= i)
        {
            factorial = factorial * (j - 1);
            j++;
        }

        // Calculate power number^(i-1)
        power = 1.0;
        k = 2;
        while (k <= i)
        {
            power = power * number;
            k++;
        }

        // Add term to exponent
        exponent = exponent + (power / factorial);
        i++;
    }

    printf("The exponent value is: %.10f", exponent);

    return 0;
}
