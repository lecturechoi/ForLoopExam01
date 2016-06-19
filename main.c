#include <stdio.h>

int main(void)
{
	int i, j, m, blank;

	blank = 26;

	for (i=65; i<=90; i++)
	{
		for (m=blank; m>=0; m--)
		{
			printf(" ");
		}

		blank = blank - 1;

		for (j=65; j<=i; j++)
		{
			printf("%c ", j);
		}
		printf("\n");
	}
	return 0;
}
