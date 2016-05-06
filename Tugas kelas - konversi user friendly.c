#include <stdio.h>

main()
{
    int c,h,q;
    system("cls");
    printf("Selamat Datang di Program Pemetaan Nilai");
    printf("\nProgram ini akan menghitung nilai, dan memetakannya ke dalam range nilai");
    printf("\nRange nilai adalah sebagai berikut:");
    printf("\nA = 86-100 \nB = 71-85 \nC = 55-70 \nD = 0-55");
    printf("\n\nTekan 0 untuk keluar\nTekan 1 untuk lanjut");
    printf("\nApa Pilihanmu? ");
    scanf("%d",&c);
    if(c==1)
    {
        system("cls");
        int n,i,x;
        int A,B,C,D;
        printf("\nRange nilai adalah sebagai berikut:");
        printf("\nA = 86-100 \nB = 71-85 \nC = 55-70 \nD = 0-55");
        printf("\nSilakan masukkan nilai-nilai yang diinginkan");
        printf("\nmasukkan jumlah data : ");
        scanf("%d",&n);
        i=1;
        A=0;
        B=0;
        C=0;
        D=0;
        if(i!=-1)
        {
            while(i<=n)
            {
                printf("\n\nmasukkan nilai: ");
                scanf("%d",&x);
                if(x<=100&&x>85)
                {
                    A=A+1;
                    printf("nilai anda: A");
                }
                else if(x<=85&&x>70)
                {
                    B=B+1;
                    printf("nilai anda: B");
                }
                else if(x<=70&&x>55)
                {
                    C=C+1;
                    printf("nilai anda: C");
                }
                else if(x<=55&&x>=0)
                {
                    D=D+1;
                    printf("nilai anda: D");
                }
                else if(x>100||x<0)
                {
                    printf("Nilai tidak valid!");
                    i=i-1;
                }
                i=i+1;
            }
            printf("\n\nnilai A: %d",A);
            printf("\nnilai B: %d",B);
            printf("\nnilai C: %d",C);
            printf("\nnilai D: %d",D);
            printf("\n\nTekan 1 jika ingin kembali ");
            scanf("\n%d",&h);
            if(h==1)
            {
                return main();
            }
            else return 0;
        }

    }
    else if(c==0)
    {
        return 0;
    }
    else if(c!=0||c!=1)
    {
        return main();
    }
}
