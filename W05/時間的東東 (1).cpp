#include <stdio.h>

int main(){
    int sec;
	int hh, mm, ss;
	scanf("%d:%d:%d", &hh, &mm, &ss);
    sec=(hh*3600+mm*60+ss);
    printf("%d", sec);

}
