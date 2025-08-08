#include <stdio.h>
#include <float.h>
int main(void){
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("%.4f %.12f %.16f\n",a, a, a);
    printf("%.4f %.12f %.16f\n",b, b, b);
    printf("%f %f\n",FLT_DIG, DBL_DIG);
    return 0;
}
//Значения FLT_DIG и DBL_DIG согласуются с значением 1.0/3.0