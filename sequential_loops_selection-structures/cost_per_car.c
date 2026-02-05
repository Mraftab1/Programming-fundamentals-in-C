    #include<stdio.h>
    int main()
    {
        int miles;
        int gallon_cost;
        int average;
        int parking_fees;
        int tolls;
        float total;
        printf("Enter miles: \n");
        scanf("%d", &miles);
        printf("Enter cost per gallon: \n");
        scanf("%d", &gallon_cost);
        printf("Enter average miles per gallon: \n");
        scanf("%d", &average);
        printf("Enter the parking fees per day: \n");
        scanf("%d", &parking_fees);
        printf("Enter the tolls: \n");
        scanf("%d", &tolls);
        total=tolls+parking_fees+((float)miles/average)*gallon_cost;
        printf("The cost of your daily travel is: %.2f", total);


        return 0;
    }
