#include <stdio.h>
int main(void){
    char name[40];
    float height;
    printf("Введите ваше имя:\n");
    scanf("%s", &name);
    printf("Введите ваш рост в сантиметрах:\n");
    scanf("%f", &height);
    printf("%s, ваш рост составляет %.2f метров\n", name, height/100);
    return 0;
}