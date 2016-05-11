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
        printf("Selamat Datang di Program Untuk Menghitung Rataan");
        printf("\nJumlah data yang dimasukkan: %d",n);
        int v,i,x, a[100],hitung=0;
        float r,j,rataan;
        int xmin=100;
        int xmax=0;
        i=1;
        j=0;
        while(i<=n)
        {
            for(x=0;x<n;x++)
			{
				//system("cls");
				printf("\n\nmasukkan bilangan: ");
				scanf("%d",&a[x]);
			}
			printf("\ndata asli:\n ");
			for(i=0;i<n;i++)
			{
				j=j+a[i];
				printf("%d ",a[i]);
				
			}
            i=i+1;
        }
        //Sorting algorithms
            int num,z,d,keep;
			for(num=0;num<n;num++)
			{
				for(z=0;z<(n-1);z++)
				{
					if(a[z]>a[z+1])
					{
						keep = a[z];
						a[z]=a[z+1];
						a[z+1]=keep;
					}
				}
			}
			printf("\n\n");
			printf("hasil urutan naik:\n ");
			for(z=0;z<n;z++)
			{
				printf("%d ",a[z]);

			}
			
			int data, bawah, tengah, atas, all,posisi;
			int s;
			printf("\nnilai yang dicari: ");
			scanf("%d",&s);
			bawah=0;
			atas=n;
			while(bawah<=atas)
			{
				tengah=(bawah+atas)/2;
				if(a[tengah]==s)
				{
					posisi=tengah;
					break;
				}
				else if(a[tengah]<=s)
				{
					atas=tengah-1;
				}
				else if(a[tengah]>=s)
				{
					bawah=tengah+1;
				}
			}
			printf("nilai ada di posisi: %d",posisi);
			
            
        printf("\njumlah nilai: %.0f",j);
        rataan = rata2(r,j,n);
        printf("\nrataan: %.2f",rataan);
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

