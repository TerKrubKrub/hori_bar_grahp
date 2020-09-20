#include <stdio.h>
int main()
{
	int i, j, x[10000];
	for (i = 1; i > 0; i++)
	{
		scanf_s("%d", &x[i]);
		if (x[i] <= 0) break;
	}
	for (i = 1; i > 0; i++)
	{
		if (x[i] > 0)
		{
			for (j = 1; j <= x[i]; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else return 0;
	}
}