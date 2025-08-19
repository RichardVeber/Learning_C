#include <stdio.h> 
int main(void) 
{
    printf("Введите код ASCII, и программа выдаст вам символ соответствующий этому коду:" );
    char ch;
    scanf("%d", &ch);
    printf("Символ с кодом %d это %c ", ch, ch );
}
