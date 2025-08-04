#include <stdio.h>
#include <string.h>
int main(void){
    char name[15]; //array of 15 characters is enough for most of russian names
    scanf("%s", &name);
    int lengh = strlen(name);
    printf("a) \"%s\"\n", name); 
    printf("б) \"%20s\"\n", name);
    printf("в) \"%-20s\"\n", name);
    printf("г) \"%*s\"\n", lengh + 3, name);
    return 0;
}