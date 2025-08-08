#include <stdio.h>
#include <float.h>
int main(void){
    const float coefficient_1 = 3.785;
    const float coefficient_2 = 1.609;
    float miles,gallons;
    scanf("%f", &miles);
    scanf("%f", &gallons);
    float miles_per_gallon = miles/gallons;
    float gallons_per_mile = gallons/miles;
    float liters = gallons*coefficient_1;
    float kilometers  = miles*coefficient_2;
    float liters_per_100_kilometers = liters/kilometers*100;
    printf("%.1f\n",miles_per_gallon);
    printf("%f  ",liters_per_100_kilometers);
    return 0;
}                                    