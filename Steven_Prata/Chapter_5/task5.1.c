#include <stdio.h>
#define MIN_PER_HOUR 60 // количество секунд в минуте
int main(void)
{
int min, hours, left;

printf("Введите количество минут:\n"); 
scanf("%d", &min) ; // чтение количества секунд
while (min > 0)
{
hours = min / MIN_PER_HOUR; // усеченное количество минут 
left = min % MIN_PER_HOUR; // количество секунд в остатке 
printf ("%d секунд - это %d минут(ы) %d секунд.", min, hours, left);
printf("Введите следующее значение:\n"); 
scanf ("%d" , &min);
}
return 0;
}