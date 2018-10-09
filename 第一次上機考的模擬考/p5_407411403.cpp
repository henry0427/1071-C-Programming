#include <stdio.h>

int Ari(int n1,int n2,int a1,int a2,int a3,int a4,int a5){
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	a1=n1+n2;
	a2=n1-n2;
	a3=n1*n2;
	a4=n1/n2;
	a5=n1%n2;
	printf("%d + %d = %d\n",n1,n2,a1);
	printf("%d - %d = %d\n",n1,n2,a2);
	printf("%d * %d = %d\n",n1,n2,a3);
	printf("%d / %d = %d\n",n1,n2,a4);
	printf("%d %% %d = %d\n",n1,n2,a5);
}

int BMI(int h1, int h2, float w1, float w2){
	printf("Enter height(-1 to exit): ");
	scanf("%d %d", &h1, &h2);
		if(h1<=0 || h2<=0){
		printf("Bye! Coding by 407411403\n");
	}else{
		for(int i=h1;i<=h2;i++){
		w1=18.5*((i/100.0)*(i/100.0));
		w2=24.0*((i/100.0)*(i/100.0));
		printf(" %d cm: %.1f ~ %.1f (kg)\n", i, w1, w2);		
	}
	}		
}

int Tri(int h){
	printf("Enter height(-1 to exit): ");
	scanf("%d", &h);
	if(h<=0)
		printf("Bye! Coding by 407411403");
	else {
		for(int i=1; i<=h; i++) {
			for(int j=1; j<=h*2+2; j++) {
				if(j>=h-i+1 && j<=h+i+2 && j!=h+1 && j!=h+2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
}

int encode(int N, int m1, int m2, int m3, int m4)
{
	printf("Enter N(-1 to exit): ");
	scanf("%d", &N);
	m1=(N/1000+5)%10;
	m2=(N/100)%10;
	m3=(N/10)%100%10;
	m4=N%10;
	if(N<=0){
		printf("Bye! coding by 407411403");
	}else{
		printf("encode(%d) = %d%d%d%d\n",N,m3,m4,m2,m1);
	}
}

int decode(int N, int m1, int m2, int m3, int m4)
{
	printf("Enter N(-1 to exit): ");
	scanf("%d", &N);
	m1=(N/1000+5)%10;
	m2=(N/100)%10;
	m3=(N/10)%100%10;
	m4=N%10;
	if(N<=0){
		printf("\n");
	}else{
		printf("decode(%d%d%d%d) = %d\n",m3,m4,m2,m1,N);
	}
}

/*********************************************/

int main(){
	int choice;
	int n1, n2, a1, a2, a3, a4, a5;
	int h1, h2;
	float w1, w2;
	int h;
	int N, m1, m2, m3, m4;
	
	while(1)
{
	printf("(1) Arithmetic Computation\n");
	printf("(2) List BMI ranges\n");
	printf("(3) Draw Four Vertical Triangles\n");
	printf("(4) encode(n)\n");
	printf("(5) decode(n)\n");
	printf("(6) Exit\n");
	printf("=> ");
	scanf("%d", &choice);
	
	if(choice==6)break;
	switch(choice){
		case 1:
			Ari(n1, n2, a1, a2, a3, a4, a5);
			break;
		case 2:
			BMI(h1, h2, w1, w2);
			break;
		case 3:
			Tri(h);
			break;
		case 4:
			encode(N, m1, m2, m3, m4);
			break;
		case 5:
			decode(N, m1, m2, m3, m4);
			break;
	}
}		
}
