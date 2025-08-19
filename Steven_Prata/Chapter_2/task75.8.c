#include <stdio.h> 
void one_three();
void two();
int main(void){
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");
}
void two(){
    printf("два\n");
}
void one_three(){
    printf("один\n");
    two();
    printf("три\n");
}