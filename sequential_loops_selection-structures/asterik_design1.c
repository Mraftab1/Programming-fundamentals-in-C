#include<stdio.h>
int main()
{   int side;
    int length=1;
    int width;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    while(length<=side){
        width=1;
        while(width<=side){
            if (length==1){
                printf("*");
                }
            else if(length==side){
                printf("*");
            }
            else if (width==1){
                printf("*");
            }
            else if(width==side){
                printf("*");
            }

            else printf(" ");
            width++;
        }
        printf("\n");
        length++;
    }



    return 0;
}