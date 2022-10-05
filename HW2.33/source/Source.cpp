#include<stdio.h>
int main() {
	float a, b, c, d, e, total;
	printf("一整天的總里程數：");
	scanf_s("%f", &a);
	printf("\n");
	printf("汽油一公升價格：");
	scanf_s("%f", &b);
	printf("\n");
	printf("一公升能行駛距離：");
	scanf_s("%f", &c);
	printf("\n");
	printf("一天停車費：");
	scanf_s("%f", &d);
	printf("\n");
	printf("一天通行費(過路費)：");
	scanf_s("%f", &e);

	total = ((a / c) * b) + d + e;
	printf("\n");
	printf("一整天總花費：%0.1f", total);
}