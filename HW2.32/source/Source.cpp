#include<stdio.h>
int main() {
	float h, w,bmi;
	scanf_s("%f %f", &h, &w);
	bmi = w / ((h / 100)*(h / 100));
	printf("\n你的BMI：%4.2f\n", bmi);

	if (bmi < 18.5) printf("\n體重過輕");
	if (bmi>= 18.5 && bmi < 25) printf("\n體重正常");
	if (bmi >= 25 && bmi < 30) printf("\n體重過重");
	if (bmi >= 30) printf("\n體重超重");
}