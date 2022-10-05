#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a,&b,&c);
	if (a > b) {
		if (a > c) {
			if (b > c) {
				printf("程%d,程%d", a, c);
			}
			else if (c > b) {
				printf("程%d,程%d", a, b);
			}
		}
		else if (c > a) {
			printf("程%d,程%d", c, b);
		}
	}
	else if (b > a) {
		if (c > a) {
			if (b > c) {
				printf("程%d,程%d", b, a);
			}
			else if (c > b) {
				printf("程%d,程%d", c, a);
			}
		}
		else if (a > c) {
			printf("程%d,程%d", b, c);
		}
	}
}