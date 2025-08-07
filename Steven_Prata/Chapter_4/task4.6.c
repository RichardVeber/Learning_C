#include <stdio.h>
#include <string.h>
int main(void){
    char surname[25];
    char name[15];
    printf("Введите сначала ваше имя, затем вашу фамилию:");
    scanf("%s %s", &name, &surname);
    printf("%s %s\n%*d %*d\n",name, surname, strlen(name),strlen(name),strlen(surname),strlen(surname));
    printf("\n%s %s\n%-*d %-*d\n",name, surname, strlen(name),strlen(name),strlen(surname),strlen(surname));
    return 0;
}