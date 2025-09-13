#include <stdio.h>
int main(void)
#define a 2.54 //centimeters in one inch
#define b 30.54 //centimeters in one pound
{
    float cm, pounds, inches;
    printf("Введите высоту в сантиметрах(<=О для выхода из программы): ");
    scanf("%f", &cm);
    while (cm > 0)
    {
         inches = cm/a;
         pounds = cm/b;
         printf("%.1f см = %.2f футов, %.1f дюймов\n",cm, pounds, inches);
         printf("Введите высоту в сантиметрах(<=О для выхода из программы): ");
         scanf("%f", &cm);
    }
    return 0;
} 