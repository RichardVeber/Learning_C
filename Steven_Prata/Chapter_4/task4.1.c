#include <stdio.h>
int main(void){
    char name[10];
    char surname[10];
    scanf("%s", &name);
    scanf("%s", &surname);
    printf("%s %s", surname, name);
    return 0;
}