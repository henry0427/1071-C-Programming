#include <stdio.h>

long rgcd(int a, int b){
    if(a==0)
        return b;
    else
        return rgcd(b%a, a);
}

int gcd(int a, int b){
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)
            printf("%d\n", i);
    }
}



int main()
{
    printf("rgcd(48,126) = %d\n",rgcd(48,126));
    printf("gcd(48,126) = %d\n\n",gcd(48,126));

    printf("rgcd(48,128) = %d\n",rgcd(48,128));
    printf("gcd(48,128) = %d\n\n",gcd(48,128));

    printf("rgcd(48,144) = %d\n",rgcd(48,144));
    printf("gcd(48,144) = %d\n\n",gcd(48,144));

    printf("rgcd(48,48) = %d\n",rgcd(48,48));
    printf("gcd(48,48) = %d\n",gcd(48,48));

    return 0;
}
