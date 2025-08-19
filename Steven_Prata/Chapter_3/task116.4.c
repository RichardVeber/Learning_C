#include <stdio.h> 
int main(void) 
{
    printf("Введите значение с сплавающей запятой:" );
    float input;
    scanf("%f", &input);
    printf("Запись с фиксированной запятой: %f\nЭкспоненциальная форма: %e\nДвоично-экспоненциальная форма: %a\n", input, input, input);
}
