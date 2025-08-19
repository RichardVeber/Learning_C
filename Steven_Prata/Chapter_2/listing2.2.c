#include <stdio.h>
int main(void)
{
   int feets, fathoms;
   fathoms = 2;
   //int feets, fathoms = 2;
   feets = 6 * fathoms;
   printf("В %d морских милях содержится %d футов\n" , fathoms,feets);
   printf("Именно %d футов\n" , 6 * fathoms);
}