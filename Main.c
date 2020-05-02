#include <stdio.h>

int main()
{
	int i, j, sum;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			sum = i * j;
			printf("%-2d * %-2d = %-3d\t", j, i, sum);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 6; j <= 10; j++)
		{
			sum = i * j;
			printf("%-2d * %-2d = %-3d\t", j, i, sum);
		}
		printf("\n");
	}
}