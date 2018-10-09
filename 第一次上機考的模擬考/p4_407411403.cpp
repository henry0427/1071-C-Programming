#include <stdio.h>

int encode(int N, int n1, int n2, int n3, int n4)
{
	n1=(N/1000+5)%10;
	n2=(N/100)%10;
	n3=(N/10)%100%10;
	n4=N%10;
	if(N<=0){
		printf("Bye! coding by 407411403");
	}else{
		printf("encode(%d) = %d%d%d%d\n",N,n3,n4,n2,n1);
	}
}

int decode(int N, int n1, int n2, int n3, int n4)
{
	n1=(N/1000+5)%10;
	n2=(N/100)%10;
	n3=(N/10)%100%10;
	n4=N%10;
	if(N<=0){
		printf("");
	}else{
		printf("decode(%d%d%d%d) = %d\n",n3,n4,n2,n1,N);
	}
}



/******************************************************/

int main()
{
	int N;
	int n1, n2, n3, n4;
	printf("Enter N(-1 to exit): ");
	scanf("%d", &N);
	encode(N,n1,n2,n3,n4);
	decode(N,n1,n2,n3,n4);
}
