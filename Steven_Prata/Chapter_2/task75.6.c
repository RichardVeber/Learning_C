#include <stdio.h> 
#define TWO 2
int main(void){
    int toes, toes_2, toes_sqrd;
    toes = 10;
    toes_2 = toes*TWO; // Calculate a double value of "toes" variable.
    toes_sqrd = toes*toes; //Calculate a squared value of "toes" variable.
    printf("toes = %d удвоенное значение toes = %d квадрат toes = %d\n",toes, toes_2, toes_sqrd);
    return 0;
}