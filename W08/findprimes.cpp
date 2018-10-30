#include <stdio.h>

int prime(int n1, int n2, int k){
    for(int i=n1; i<=n2; i++){
        for(int j=1; j<=i; j++){
            if(i%j==0)
                k++;
        }
    }
}

int main()
{
    int n1, n2;
    int k;
    int i;
    printf("Enter n1 n2: ");
    scanf("%d %d", &n1, &n2);
    printf("%d ", prime(n1,n2,k));


}
