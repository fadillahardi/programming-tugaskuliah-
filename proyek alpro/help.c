#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int back;
    printf("Program ini adalah sebuah prototipe pengisian IRS Mahasiswa\n");
    printf("Pilihan mata kuliah dan sks yang tersedia hanya mata kuliah yang dapat diambil pada semester ganjil\n");
    printf("Perlu diingat!! yang diinput saat mengisi mata kuliah adalah nomor urut paling kiri, mohon diperhatikan baik-baik\n");
    printf("Jika ada pertanyaan seputar program, dapat menghubungi:\n Fadilla Hardi Y\nDyah Sekar Asih\n\n");
    printf("Sekian dan Terima Kasih\n\n");
    printf("tekan nol (0) lalu Enter untuk kembali");
    scanf("%d",&back);
    if(back==0)
    {
        system("cls");
        return 0;
    }
    else system("cls");
    return main();

}
