#include <stdio.h>

int main()
{
    char nama[20], jurusan[20];
    
    printf("Nama\t: ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Jurusan\t: ");
    fgets(jurusan, sizeof(jurusan), stdin);
   
    printf("\n=======================\n");
    printf("Nama yang terinput\t: %s", nama);
    printf("Jurusan yang terinput\t: %s", jurusan);
    return 0;
}
