#include <stdio.h>

int main() {
    int productNumber;
    int quantitySold;
    int input;
    double price;
    double retail = 0.0;   // FIX: initialize
    double amount;

    do {
        printf("\nEnter product number and quantity (XY) or -1 to exit: ");
        scanf("%d", &input);

        if (input > 0) {
            productNumber = input / 10;
            quantitySold = input % 10;

            switch (productNumber) {
                case 1: price = 2.98; break;
                case 2: price = 4.50; break;
                case 3: price = 9.98; break;
                case 4: price = 4.49; break;
                case 5: price = 6.87; break;
                default:
                    printf("Invalid product number!\n");
                    continue;
            }

            amount = price * quantitySold;
            retail += amount;
        }

    } while (input != -1);

    printf("\nTotal retail value of products sold: %.2f\n", retail);

    return 0;
}
