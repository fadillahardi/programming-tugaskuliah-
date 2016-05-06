#include <stdio.h>
#include <stdlib.h>

main()
{
    int a,i,x;
    float r,j;
    int xmin=100;
    int xmax=0;
    printf("\nmasukkan jumlah data : ");
    scanf("%d",&a);
    i=1;
    j=0;
    while(i<=a)
    {
        printf("masukkan bilangan: ");
        scanf("%d",&x);
        if(xmax<=x)
        {
            xmax=x;
        }
        else if(xmin>=x)
        {
            xmin=x;
        }

        j=j+x;
        i=i+1;

    }
    printf("\njumlah nilai: %.0f",j);
    r = j/a;
    printf("\nrataan: %.2f",r);
    printf("\nnilai paling tinggi: %d",xmax);
    printf("\nnilai paling rendah: %d",xmin);
    return 0;
}
