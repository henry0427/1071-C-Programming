#include <stdio.h>

int main()
{
	int h1, h2;
	float w1, w2;
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
