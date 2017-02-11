#include <stdio.h>

int main()
{
	int i;
	int j;

	i = 0;
	j = 1;

	while (i < 100)
	{
		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if(i < 98)
			{
				//			getchar();
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');

}
