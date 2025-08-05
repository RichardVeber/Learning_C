#include <stdio.h>
int main(void){
    float aa;
    printf("Введите число с плавающей запятой\n");
    scanf("%f", &aa);
    printf(" Вводом является %.1f или %e\n" ,aa ,aa);
    printf(" Вводом является %+.3f или %E\n" ,aa ,aa);
    return 0;
}