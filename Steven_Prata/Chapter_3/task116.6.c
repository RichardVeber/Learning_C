#include <stdio.h> 
int main(void) 
{
    int quart;
    printf("Введите объем воды в квартах:");
    scanf("%d", &quart);
    int gramms = quart*950;
    float weight = 3.1e-23;
    float molecules = gramms/weight;
    printf("Количество молекул:%e", molecules);
}
