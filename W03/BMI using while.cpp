#include <stdio.h>
#include <math.h>

int main()
{
	float height, weight, BMI;
	
	while(BMI>=0){
		printf("Enter high and weight\n");
	scanf("%f %f", &height, &weight);
	printf("%f ", BMI=weight/((height/100.)*(height/100.)));
	if(BMI>=35)
		printf("����\n");
	else if(BMI<35 &&BMI>=30)printf("����\n");
	else if(BMI<30 && BMI>=27)printf("����\n");
	else if(BMI<27 &&BMI>=24)printf("�L��\n");
	else if(BMI<24 && BMI>=18.5)printf("���`\n");
	else if(printf("�L��\n"));
	}
	
}
