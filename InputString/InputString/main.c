/*¼·¾¾ -> È­¾¾*/
#include <stdio.h>
int main() {
	double celsius; // ¼·¾¾
	
	printf("¼·¾¾ -> È­¾¾ ÇÁ·Î±×·¥");
	printf("input ¼·¾¾ ¿Âµµ : ");
	scanf_s("%lf", &celsius); // ¼·¾¾ ¿Âµµ ÀÔ·Â
	printf("¼·¾¾ %fµµ == È­¾¾ %fµµ \n", celsius, 9 * celsius / 5 + 32);

	/*scanf »ç¿ë¹ý*/
	short sh;
	int i;
	long lo;
	float fl;
	double du;

	printf("short Çü º¯¼ö ÀÔ·Â: ");
	scanf_s("%hd", &sh);
	printf("int Çü º¯¼ö ÀÔ·Â: ");
	scanf_s("%d", &i);
	printf("long Çü º¯¼ö ÀÔ·Â: ");
	scanf_s("%ld", &lo);
	printf("float Çü º¯¼ö ÀÔ·Â: ");
	scanf_s("%f", &fl);
	printf("double Çü º¯¼ö ÀÔ·Â: ");
	scanf_s("%lf", &du);

	printf("short : %d , int : %d ", sh, i);
	printf("long : %ld , float : %f, double : %f \n", lo, fl, du);

	return 0;
}