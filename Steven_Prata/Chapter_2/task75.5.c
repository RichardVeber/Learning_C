#include <stdio.h> 
void br();
void ic();
int main(void) 
{
    br();
    printf(", ");
    ic();
    printf(" \n");
    ic();
    printf(", \n");
    br();
    printf(" \n");
    return 0;
}
void br()
{
    printf("Бразилия, Россия");
}
void ic()
{
    printf("Индия, Китай");
}