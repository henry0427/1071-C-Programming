#include <stdio.h>

int main()
{
	unsigned int year;
	
	printf("Enter year: ");
	scanf("%d",&year);
		while(year>=0)
		{
		if(year%4==0 && year%100!=0 || year%400==0)
			printf("year %d is leap year\n",year);
		else
			printf("year %d is not leap year\n",year);
	printf("Enter year: ");		
	scanf("%d",&year);		
	}
				
}
