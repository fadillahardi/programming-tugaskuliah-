#include<stdio.h>
#include<stdlib.h>

float rata2(float r,float j, int n)
{
	r = j/n;
	return r;
}

rataan(int n)
{
	system("cls");
        //printf("Selamat Datang di Program Untuk Menghitung Rataan");
        //printf("\nProgram ini akan menghitung rataan, nilai minimum, dan nilai maksimum dari sejumlah data");
        printf("\nJumlah data yang dimasukkan: %d",n);
        int v,i,x, a[100],hitung=0;
        float r,j,z;
        int xmin=100;
        int xmax=0;
        i=1;
        j=0;
        while(i<=n)
        {
            //printf("\n\nmasukkan bilangan: ");
            //scanf("%d",&x);
            for(x=0;x<n;x++)
			{
				//system("cls");
				printf("\n\nmasukkan bilangan: ");
				scanf("%d",&a[x]);
			}
			int s;
			printf("\nnilai yang dicari: ");
			scanf("%d",&s);
			printf("\ndata asli:\n ");
			for(i=0;i<n;i++)
			{
				j=j+a[i];
				printf("%d ",a[i]);
				if(a[i]==s)
				{
					hitung++;
				}
			}
			if(hitung==0)
			{
				printf("not found");
			}
			else printf("banyaknya nilai: %d", hitung);
            /*if(xmax<=x)
            {
                xmax=x;
            }
            if(xmin>=x)
            {
                xmin=x;
            }*/

            i=i+1;

        }
        printf("\njumlah nilai: %.0f",j);
        z = rata2(r,j,n);
        printf("\nrataan: %.2f",z);
        //printf("\nnilai paling tinggi: %d",xmax);
        //printf("\nnilai paling rendah: %d",xmin);
        printf("\n\nUntuk kembali tekan 1");
        printf("\napa pilihanmu?");
        scanf("%d",&v);
        if(v==1)
        {
            return main();
        }
        else return 0;
        
        
}

main()
{
	int p;
	int n;
	system ("cls");
	printf("Program ini digunakan untuk mencari nilai rata-rata, dan konversi nilai");
	printf("\nTekan 1 untuk rataan\nTekan 0 untuk keluar");
	printf("\nMasukkan jumlah data yang ingin diolah: ");
	scanf("%d", &n);
	printf("\n\nApa pilihanmu ? ");
	scanf("%d",&p);
	if(p==1)
	{
		rataan(n);
		return 0;
	}
	else system("cls");
	return main();
}

