#include <stdio.h>

int main() {
	int a = 124;
	printf("a �� ���� %d������ %o \n", 8, a);
	printf("a �� ���� %d������ %d \n", 10, a);
	printf("a �� ���� %d������ %x \n", 16, a);

	printf("\n");
	float b = 3.141592f;
	double c = 3.141592;
	printf("b = %f \n", b);
	printf("c = %f \n", c);
	printf("f���� ����3 ������: %f \n", 3);

	printf("\n");
	float d = 3.141592f;
	double e = 3.141592;
	int f = 124;
	printf("d = %.2f \n", d);
	printf("e = %6.3f \n", e);
	printf("e = %7d \n", f);

	return 0;
}