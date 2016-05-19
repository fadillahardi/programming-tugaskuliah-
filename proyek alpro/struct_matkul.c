#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define size 36

/*struct List_MK
{
    char code [36][11];
    char matkul[36][50];
    int sks [36];
};*/
void daftar(int sks[], int size)
{
    int i;
    sks[i]={3,3,3,2,3,4,2,2,2,3,3,3,3,4,3,2,1,1,1,1,1,3,2,3,3,2,3,3,3,3,4,3,3,3,3,3};
    for(i=0;i<36;i++)
    {
        printf("%d\n",sks[i]);//printf("%s\t\t%s\t\t\t%d\t\n",MK.code[i],MK.matkul[i],MK.sks[i]);
    }
    return sks[36];
}


main()
{
    int i,sks[36],n;
    //int size =36;
    //struct List_MK MK;
    //printf("kode\t\tnama matkul\t\t\tsks\n");
    daftar(sks[36]);
    while(1)
    {
        printf("input: ");
        scanf("%d",&n);
        printf("sks dapat: %d", sks[n]);
    }
    return 0;
}
