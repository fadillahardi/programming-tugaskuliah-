#include<stdio.h>

/*datapegawai()
{
	nip
	nama
	golongan
	gaji pokok
	status
	anak
	golongan 1-9
	1=4jt
	9=12jt
}*/

/*tabelref(int pti[9], int pta[9], int pp[9])
{
	int pti[9]={5,5,7,7,8,8,9,10,10};
	int pta[9]={5,5,5,6,6,6,7,7,7};
	int pp[9]={10,10,15,15,15,15,25,25,25};
	return tabelref();
}*/

main()
{
	int a,b,c,n,s,anak,gajidapat;
	int t_istri,t_anak,total,pajak,bersih,tunj_total;
	int gaji[9]={4,5,6,7,8,9,10,11,12};
	int pti[9]={5,5,7,7,8,8,9,10,10};
	int pta[9]={5,5,5,6,6,6,7,7,7};
	int pp[9]={10,10,15,15,15,15,25,25,25};


	while(1)
	{
		printf("\nnama: ");
		printf("\ngolongan: ");
		scanf("%d",&n);
		gajidapat=gaji[n-1]*1000000;
		a=pti[n-1];
		b=pta[n-1];
		c=pp[n-1];
		printf("\nstatus(kawin=1; belum=2): ");
		scanf("%d",&s);
		if(s==1)
		{
			t_istri=a*(0.01)*gajidapat;
			printf("Jumlah anak = ");
			scanf("%d",&anak);
			t_anak=anak*b*(0.01)*gajidapat;
		}
		else if(s==2)
		{
			t_istri = 0;
			t_anak = 0;
		}
		total=gajidapat+t_istri+t_anak;
		pajak=c*0.01*total;
		bersih=total-pajak;
		tunj_total=t_istri+t_anak;
		printf("%d",t_istri);
		printf("\n%d",t_anak);
		printf("\ngaji dapat: %d ",gajidapat);
		printf("\ntunjangan istri: %d\ntunjangan anak: %d",t_istri, t_anak);
		printf("\ngaji total: %d ",total);
		printf("\npajak: %d",pajak);
		printf("\ngaji bersih: %d",bersih);
		return 0;
	}

}
