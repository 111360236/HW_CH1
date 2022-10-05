#include<stdio.h>
#include<math.h>
int main() {
	printf("number\tsquare\tcube");
	for (int i = 0; i < 11; i++) {
		int a, b;
		a = pow(i, 2);
		b = pow(i, 3);
		printf("\n%d\t%d\t%d\t",i,a,b);
	}
}