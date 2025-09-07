    #include <stdio.h>
    #include <locale.h>
    int main(void){
    setlocale(LC_ALL, "");
    double a = 1123;
    printf("Текущая локаль: %s\n", setlocale(LC_ALL, NULL));
    }