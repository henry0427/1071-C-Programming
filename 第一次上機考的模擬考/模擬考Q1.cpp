#include <stdio.h>

/***********************************************/

int main()
{   
	int n1, n2;
	int a1, a2, a3, a4, a5;
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
