#include<stdio.h>
int main() {
	float a, b, c, d, e, total;
	printf("�@��Ѫ��`���{�ơG");
	scanf_s("%f", &a);
	printf("\n");
	printf("�T�o�@���ɻ���G");
	scanf_s("%f", &b);
	printf("\n");
	printf("�@���ɯ��p�Z���G");
	scanf_s("%f", &c);
	printf("\n");
	printf("�@�Ѱ����O�G");
	scanf_s("%f", &d);
	printf("\n");
	printf("�@�ѳq��O(�L���O)�G");
	scanf_s("%f", &e);

	total = ((a / c) * b) + d + e;
	printf("\n");
	printf("�@����`��O�G%0.1f", total);
}