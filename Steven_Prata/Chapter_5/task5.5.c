#include <stdio.h>
int main (void) 
{
int count, sum, limit; 
count = 0; 
sum = 0;
printf("Программа складывает все числа в диапозоне от 0 до указанного вами значения.\n\n"); 
printf("Введите значение для расчета: "); 
scanf("%d", &limit);
while (count++ < limit) 
sum = sum + count; 
printf("sum = %d\n", sum); 
return 0; 
}