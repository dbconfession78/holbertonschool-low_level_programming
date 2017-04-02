#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	int should_put_char = 0;
	char digit_is_one = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (i >= 0)
	{
		digit_is_one = ((n >> i) & 1);
		if (digit_is_one)
			should_put_char = 1;

		if (should_put_char)
		{

			if (digit_is_one)
				putchar('1');
			else
				putchar('0');
		}
		i--;
	}
}

unsigned int binary_to_uint(const char * b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		result = result << 1;
		if (*b == '1')
		{
			result = result | 1;
		}
		b++;
	}
	return (result);
}

int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	return (index < sizeof(n) * 8 - 1 ? result = (n >> index) & 1 : -1);
}

int set_bit(unsigned long int *n, unsigned int index)
{
	return (*n |= 1 << index ? 1 : -1);

}

int clear_bit (unsigned long int *n, unsigned int index)
{
	return ((*n &= ~(1 << index)) ? 1 : -1);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i = sizeof(n) * 8 - 1;

	while (i >= 0)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;

		i--;
	}
	return (count);

}

int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
