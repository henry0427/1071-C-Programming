#include <stdio.h>

int fit(int n){
    if(n==1 || n==0)
        return n;
    else
        return fit(n-1)+fit(n-2);
}


int main()
{
        printf("fn(%d)=%d\n", 3, fit(3));
        printf("fn(%d)=%d\n", 10, fit(10));
        printf("fn(%d)=%d\n", 30, fit(30));

        return 0;
}



/*

0+1+1+2+3+5+8+13+....
0+1+2+3+4
n(3)=0+1+1

*/
