#include <stdio.h> 
int main(void)
{
int ten = 10;
int two = 2;
рrintf("Выполняется правильно: ");
printf("%d минус %d равно %d\n", ten, two, ten - two );
printf("Выполняется неправильно: ");
printf("%d минус %d равно %d\n", ten ); // пропущены 2 аргумента
return 0;
}