#include<stdio.h>
int main() {
	float h, w,bmi;
	scanf_s("%f %f", &h, &w);
	bmi = w / ((h / 100)*(h / 100));
	printf("\n�A��BMI�G%4.2f\n", bmi);

	if (bmi < 18.5) printf("\n�魫�L��");
	if (bmi>= 18.5 && bmi < 25) printf("\n�魫���`");
	if (bmi >= 25 && bmi < 30) printf("\n�魫�L��");
	if (bmi >= 30) printf("\n�魫�W��");
}