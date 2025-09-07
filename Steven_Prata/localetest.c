    #include <stdio.h>
    #include <locale.h>
    int main() {
        setlocale(LC_ALL, "ru_RU.UTF-8");
        double a = 1.2345;
        printf("Текущая локаль: %s\n", setlocale(LC_ALL, NULL));
        printf("%.4f\n",a);
        return 0;
    }
