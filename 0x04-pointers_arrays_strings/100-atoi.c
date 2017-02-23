#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *
 *
 *
 *
 * Return:
 */

int _atoi(char *s)
{
	int i;
	int result;
	int neg_count;

	result = neg_count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg_count++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			for ( ; s[i] >= '0' && s[i] <= '9'; i++)
			{
				result = result * 10 - (s[i] - '0');
			}
			break;
		}
	}
	if (neg_count % 2 == 0)
	{
		result *= -1;
	}
	else
	{
		result *= 1;
	}
	return (result);
}

/*int main(void)
{
	int n;

	n = _atoi("asdfass><><><.,.,.,.lajsfas]]ew[w[]we[j");
	  printf("%d\n", n);
	n = _atoi("-2147483648");
	printf("%d\n", n);
	n = _atoi("2147483647");
    printf("%d\n", n);


	n = _atoi("98");
	printf("%d\n", n);
	n = _atoi("-402");
	printf("%d\n", n);
	n = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", n);
	n = _atoi("214748364");
    printf("%d\n", n);
	n = _atoi("0");
	printf("%d\n", n);
	n = _atoi("Suite 402");
	printf("%d\n", n);
	n = _atoi("         +      +    -    -98 Battery Street; San Fr\
      ancisco, CA 94111 - USA             ");
	printf("%d\n", n);
	n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", n);



	return (0);

	} */
