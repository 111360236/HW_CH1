#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a,&b,&c);
	if (a > b) {
		if (a > c) {
			if (b > c) {
				printf("�̤j��%d,�̤p��%d", a, c);
			}
			else if (c > b) {
				printf("�̤j��%d,�̤p��%d", a, b);
			}
		}
		else if (c > a) {
			printf("�̤j��%d,�̤p��%d", c, b);
		}
	}
	else if (b > a) {
		if (c > a) {
			if (b > c) {
				printf("�̤j��%d,�̤p��%d", b, a);
			}
			else if (c > b) {
				printf("�̤j��%d,�̤p��%d", c, a);
			}
		}
		else if (a > c) {
			printf("�̤j��%d,�̤p��%d", b, c);
		}
	}
}