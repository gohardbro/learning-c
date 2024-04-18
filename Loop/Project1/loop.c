#include <stdio.h>

int main() {
	/* p1 */
	int n;
	printf("N줄 삼각형 만들기 \n");
	printf("N을 입력 하세요 : \n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		// blank
		for (int j = 0; j < n - (i + 1); j++) {
			printf(" ");
		}

		// star
		for (int j = 0; j < 1 + (i * 2); j++)
		{
			printf("*");
		}

		printf("\n");
	}

	/* p2 */
	printf("N줄 역삼각형 만들기 \n");
	printf("N을 입력 하세요 : \n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		// blank
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		// star
		for (int j = 0; j < (n * 2 - 1) - (i * 2); j++)
		{
			printf("*");
		}

		printf("\n");
	}

	/* p3 */
	int sum = 0;

	// 3의 배수
	for (int i = 3; i < 1000; i += 3) {
		sum += i;
	}

	// 5의 배수
	for (int i = 5; i < 1000; i += 5) {
		if (i % 3 != 0) // 3의 배수는 중복되므로 제외
			sum += i;
	}

	printf("1000 이하의 3 또는 5 의 배수인 자연수들의 합 : %d", sum);
	return 0;
}