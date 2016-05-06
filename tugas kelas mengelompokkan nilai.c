#include <stdio.h>

main()
{
    int n,i,x;
    int A,B,C,D;
    int xmin=100;
    int xmax=0;
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
        printf("\nmasukkan nilai: ");
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

        }
        i=i+1;
    }
    }
        else return 0;


    printf("\n\nnilai A: %d",A);
    printf("\nnilai B: %d",B);
    printf("\nnilai C: %d",C);
    printf("\nnilai D: %d",D);
    return 0;
}
