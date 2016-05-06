#include <stdio.h>

main2()
{
    int i,s,n,x,j;
    int A,B,C,D,r;
    int xmin=100;
    int xmax=0;
    printf("masukkan jumlah data : ");
    scanf("%d",&n);
    i=1;
    j=0;
    A=0;
    B=0;
    C=0;
    D=0;
    while(i<=n)
    {
        printf("masukkan data: ");
        scanf("%d",&x);
        if(x<=100||x>85)
        {
            A=A+1;

        }
        else if(x<=85||x>70)
        {

            B=B+1;

        }
        else if(x<=70||x>55)
        {
            C=C+1;

        }
        else if(x<=55)
        {

            D=D+1;
        }
        i=i+1;
        printf("nilai A: ",A);
        printf("nilai B: ",B);
        printf("nilai C: ",C);
        printf("nilai D: ",D);
    }
    return 0;
}
