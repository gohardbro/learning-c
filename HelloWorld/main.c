#include <stdio.h>

int main() {
	int num = 20;
	int lineLength = num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < lineLength; j++)
		{
			if (j < num - 1 - i)
				printf(" ");
			else
				printf("*");
		}
		lineLength++;
		printf("\n");
	}

	// Ãâ·Â
	printf("Hello, World!\n");
	return 0;
}