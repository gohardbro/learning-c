/*���� -> ȭ��*/
#include <stdio.h>
int main() {
	double celsius; // ����
	
	printf("���� -> ȭ�� ���α׷�");
	printf("input ���� �µ� : ");
	scanf_s("%lf", &celsius); // ���� �µ� �Է�
	printf("���� %f�� == ȭ�� %f�� \n", celsius, 9 * celsius / 5 + 32);

	/*scanf ����*/
	short sh;
	int i;
	long lo;
	float fl;
	double du;

	printf("short �� ���� �Է�: ");
	scanf_s("%hd", &sh);
	printf("int �� ���� �Է�: ");
	scanf_s("%d", &i);
	printf("long �� ���� �Է�: ");
	scanf_s("%ld", &lo);
	printf("float �� ���� �Է�: ");
	scanf_s("%f", &fl);
	printf("double �� ���� �Է�: ");
	scanf_s("%lf", &du);

	printf("short : %d , int : %d ", sh, i);
	printf("long : %ld , float : %f, double : %f \n", lo, fl, du);

	return 0;
}