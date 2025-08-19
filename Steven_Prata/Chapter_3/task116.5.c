#include <stdio.h> 
int main(void) {
    const float secondsinyear = 3.154e+7;
    float seconds;
    unsigned int years;
    printf("Введите ваш возраст в годах:" );
    scanf("%u", &years);
    seconds = years*secondsinyear;
    printf("Ваш возраст в секундах: %.2f секунд\n", seconds);
}
