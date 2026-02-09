#include<stdio.h>
#include<math.h>
int main()
{
    double pie;
    int sign=1;
    int found_3_14=0;
    int found_3_141=0;
    int found_3_1415=0;
    int found_3_14159=0;
    pie=0;
    for(int i=1, n=1; i<=1000000; i+=2, n++){
        pie=pie+sign*(4.0/i);
        sign=-sign;
        if(found_3_14==0 && fabs(pie-3.14)<0.00001){
            found_3_14=1;
            printf("%.2f\t%d\n", pie, n);
        }
        if(found_3_141==0 && fabs(pie-3.141)<0.00001){
            found_3_141=1;
            printf("%.3f\t%d\n", pie, n);
        }
        if(found_3_1415==0 && fabs(pie-3.1415)<0.00001){
            found_3_1415=1;
            printf("%.4f\t%d\n", pie, n);
        }
        if(found_3_14159==0 && fabs(pie-3.14159)<0.000001){
            found_3_14159=1;
            printf("%.5f\t%d\n", pie, n);

            break;
        }


    }


    return 0;
}