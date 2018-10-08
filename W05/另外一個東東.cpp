#include <stdio.h>

Leapyear(int year){
    if(year%4==0 && year%100!=0 || year%400==0)

                    return 1;
                else
                    return 0;
}

/***************************************************************/

int main()

{
	int choice;
    int sec, hh, mm, ss;
	int year;

	while(1) {
		printf("Main menu\n");
		printf("1. leap\n");
		printf("2. timeconvert\n");
		printf("3. Exit\n");
		printf("=> ");
		scanf("%d", &choice);

		if(choice==3)break;
		switch(choice) {
			case 1:
                printf("Enter year: ");
                scanf("%d",&year);
                if(Leapyear(year))
                    printf("year %d is leap year\n",year);
                else
                    printf("year %d is not leap year\n",year);
				break;
			case 2:
			    printf("Enter hh:mm:ss ");
			    scanf("%d:%d:%d", &hh, &mm, &ss);
			    sec=(hh*3600+mm*60+ss);
			    printf("%d:%d:%d is %d seconds\n", hh, mm, ss, sec);
				break;
		}
	}
}
