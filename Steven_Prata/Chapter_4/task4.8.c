#include <stdio.h>
#include <float.h>
#define coefficient_1 3.785  //liters per 1 gallon
#define coefficient_2 1.609  //kilometers per mile
int main(void){
    float miles,gallons,a,miles_per_gallon,liters,kilometers; //объявление переменных. Переменная a - литры на 100 километров
    printf("Введите количество преодоленных миль:");
    scanf("%f", &miles);
    printf("Введите количество израсходованных галлонов бензина:");
    scanf("%f", &gallons);
    miles_per_gallon = miles/gallons;
    liters = gallons*coefficient_1;
    kilometers  = miles*coefficient_2;
    a = liters/kilometers*100;
    printf("\nКоличество миль, пройденных на одном галлоне - %.1f\n",miles_per_gallon);
    printf("Ваше потребление горючего составляет %.1f литров на 100км.\n",a);
    return 0;
}