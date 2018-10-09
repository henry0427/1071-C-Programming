#include <stdio.h>

int main() {
	int h;
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
