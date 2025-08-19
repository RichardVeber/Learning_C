#include <stdio.h> 
int main(void) 
{
    float cups;
    scanf("%f", &cups);
    printf("в пинтах:%f \n в унциях:%f \n в столовых ложках:%f \n в чайных ложках:%f",cups/2, cups*8, cups*16, cups*48);
    return 0;
}
