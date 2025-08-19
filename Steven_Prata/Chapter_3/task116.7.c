#include <stdio.h> 
int main(void) 
{
    printf("Введите рост в сантиметрах:");
    int sm;
    scanf("%d", &sm);
    float dm = sm/2.54;
    printf("Ваш рост в децеметрах равен %f дм\n", dm);
}
