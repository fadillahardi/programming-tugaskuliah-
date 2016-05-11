#include<stdio.h>
#include<stdlib.h>

main()
{
	int n;
	int SIZE,x,i,num,z,d,keep;
	int a[100];
	//input array
	printf("masukkan jumlah angka: ");
	scanf("%d",&SIZE);
	for(x=0;x<SIZE;x++)
	{
		//system("cls");
		printf("masukkan isi array: ");
		scanf("%d",&a[x]);
	}
	printf("\ndata asli:\n ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n\nmenu:\n1.ascending\n2.descending\n3.Selection Sort");
	printf("\npilihan: ");
	scanf("%d",&n);
	if(n==1)
	{
		Ascending(a, SIZE, SIZE);
	}
	else if(n==2)
	{
		Descending(a, SIZE, SIZE);
	}
	else if(n==3)
    {
        SelectionSort(a, SIZE, SIZE);
    }
	else
	{
	printf("input salah. Program akan menutup");
	return 0;
	}
}

Ascending(int a[], int arraySIZE, int SIZE)
{
 int x,i,num,z,d,keep;
	for(num=0;num<SIZE;num++)
	{
		for(z=0;z<(SIZE-1);z++)
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
	for(z=0;z<SIZE;z++)
	{
		printf("%d ",a[z]);

	}
}

Descending(int a[], int arraySIZE, int SIZE)
{
int x,i,num,z,d,keep;
	for(num=0;num<SIZE;num++)
	{
		for(d=0;d<(SIZE-1);d++)
		{
			if(a[d]<a[d+1])
			{
				keep = a[d];
				a[d]=a[d+1];
				a[d+1]=keep;
			}
		}
	}
	printf("\n\n");
	printf("hasil urutan turun:\n ");
	for(d=0;d<SIZE;d++)
	{
		printf("%d ",a[d]);

	}
}

SelectionSort(int a[], int arraySIZE, int SIZE)
{

   int c,s,l,position,swap;
   for ( c = 0 ; c < ( SIZE - 1 ) ; c++ )
   {
      position = c;

      for ( s = c + 1 ; s < SIZE ; s++ )
      {
         if ( a[position] > a[s] )
            position = s;
      }
      if ( position != c )
      {
         swap = a[c];
         a[c] = a[position];
         a[position] = swap;
      }
   }

   printf("Urutan ascending:\n");
    for ( c = 0 ; c < SIZE ; c++ )
    {
        printf("%d\n", a[c]);
    }
    }

