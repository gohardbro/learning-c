#include <stdio.h>

int main() {
	/* p1 */
	int n;
	printf("N�� �ﰢ�� ����� \n");
	printf("N�� �Է� �ϼ��� : \n");
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
	printf("N�� ���ﰢ�� ����� \n");
	printf("N�� �Է� �ϼ��� : \n");
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

	// 3�� ���
	for (int i = 3; i < 1000; i += 3) {
		sum += i;
	}

	// 5�� ���
	for (int i = 5; i < 1000; i += 5) {
		if (i % 3 != 0) // 3�� ����� �ߺ��ǹǷ� ����
			sum += i;
	}

	printf("1000 ������ 3 �Ǵ� 5 �� ����� �ڿ������� �� : %d", sum);
	return 0;
}