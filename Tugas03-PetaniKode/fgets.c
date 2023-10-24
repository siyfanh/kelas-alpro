#include <stdio.h>

int main() 
{
   char nama[20], jurusan[20];

   printf("Nama\t: ");
   gets(nama);
   
   printf("Jurusan\t: ");
   gets(jurusan);

   printf("\n===============================\n");
   printf("Nama yang terinput\t: %s\n", nama);
   printf("Jurusan yang terinput\t: %s\n", jurusan);
   return 0;
}
