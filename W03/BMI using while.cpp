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
		printf("重肥\n");
	else if(BMI<35 &&BMI>=30)printf("中肥\n");
	else if(BMI<30 && BMI>=27)printf("輕肥\n");
	else if(BMI<27 &&BMI>=24)printf("過重\n");
	else if(BMI<24 && BMI>=18.5)printf("正常\n");
	else if(printf("過輕\n"));
	}
	
}
