#include <stdio.h>
#include <ctype.h>


int prime(int N, int k){
    for(int i=1; i<=N; i++){
        if(N%i==0)
            k++;
    }
    return k;
}

int main()
{
    int N;
    int k=0;
    char c='Y';

    while(c=='Y'){

        printf("Enter N: ");
        scanf("%d", &N);

        if(prime(N,k)==2)
            printf("%d is a prime\n", N);
        else
            printf("%d is not a prime\n", N);

        printf("Continue (Y/N)? ");
		getchar();
		c = toupper(getchar());

        }
}

