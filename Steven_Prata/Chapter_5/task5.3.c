#include <stdio.h>
int main(void)
{
    int days, weeks, left;
    printf("Введите количество дней: ");
    scanf("%d", &days);
    while (days > 0)
    {
         weeks = days/7;
         left = days % 7;
         printf("%d дней составляют %d недели и %d дня.\n", days, weeks, left);
         printf("Введите следующее количество дней: ");
         scanf("%d", &days);
    }
    return 0;
} 