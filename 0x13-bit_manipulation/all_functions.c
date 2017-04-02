#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_binary(unsigned long int n)
{
	int i, should_put_char, digit_is_one;

	should_put_char = digit_is_one = 1;
	if (n == 0)
		putchar('0');
	for (sizeof(n) * 8 - 1; i >= 0; i--)
	{
		digit_is_one = ((n >> i) & 1);
		if (digit_is_one)
			should_put_char = 1;
		if (should_put_char)
			putchar(digit_is_one ? '1' : '0');
	}
}

unsigned int binary_to_uint(const char * b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		result = result << 1;
		if (*b == '1')
			result = result | 1;
		b++;
	}
	return (result);
}

int get_bit(unsigned long int n, unsigned int index)
{
	return (index < sizeof(n) * 8 - 1 ? (n >> index) & 1 : -1);
}

int set_bit(unsigned long int *n, unsigned int index)
{
	return (*n |= 1 << index ? 1 : -1);cat 4
}

int clear_bit (unsigned long int *n, unsigned int index)
{
	return ((*n &= ~(1 << index)) ? 1 : -1);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i;
	for (i = sizeof(n) * 8 - 1; i >= i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
