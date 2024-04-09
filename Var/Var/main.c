#include <stdio.h>

int main() {
	int a = 124;
	printf("a 의 값은 %d진수로 %o \n", 8, a);
	printf("a 의 값은 %d진수로 %d \n", 10, a);
	printf("a 의 값은 %d진수로 %x \n", 16, a);

	printf("\n");
	float b = 3.141592f;
	double c = 3.141592;
	printf("b = %f \n", b);
	printf("c = %f \n", c);
	printf("f형에 정수3 넣으면: %f \n", 3);

	printf("\n");
	float d = 3.141592f;
	double e = 3.141592;
	int f = 124;
	printf("d = %.2f \n", d);
	printf("e = %6.3f \n", e);
	printf("e = %7d \n", f);

	return 0;
}