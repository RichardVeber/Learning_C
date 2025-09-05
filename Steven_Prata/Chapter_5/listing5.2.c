/* shoes2.c -- вычисляет длину стопы для нескольких размеров обуви */
#include <stdio.h>
#define ADJUST 7.31 // один из видов символической константы

int main (void){
    const double SCALE = 0.333; // еще один вид символической константы
    double shoe, foot;
    printf("Размер обуви (^мужской) длина ступни\n");
    shoe = 3.0; 
    /* начало цикла while */
    while (shoe < 18.5){ /* начало блока */
        foot = SCALE * shoe + ADJUST;
        printf("%10.lf %20.2f даймов\n", shoe, foot); 
        shoe = shoe + 1.0;
    } /* конец блока */
    printf("Если обувь подходит, носите ее.\n"); 
    return 0;
}

