#include <stdio.h>
int main(void)
{
    int number, last_number;
    printf("Введите число: ",number);  
    scanf("%d", &number);
    last_number = number+11;
    while (last_number > number)
    {
        printf("%d\n",number);    
        number++;  
    }
    return 0;
} 