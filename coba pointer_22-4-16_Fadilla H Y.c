#include<stdio.h>
#include<math.h>

func2(float *xPtr); //prototype

main()
{
	//int *myPtr;
	float x;
	//myPtr = &my;
	printf("Masukkan nilai yang akan dihitung:");
	scanf("%f",&x);
	//myPtr = &my;
	//printf("address: %x\n",*xPtr);
	func2(&x);
	printf("hasil: %.2f\n\n", x);
	return 0;
}

func2(float *xPtr)
{
	//your mini function is declared here
	*xPtr = pow(*xPtr,2) + (2* *xPtr) + 3;
	//printf("address: %x\n",*xPtr);
}
