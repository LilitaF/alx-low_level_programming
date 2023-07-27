#include <stdio.h>

void increment (int *y)
{
	*y = *y + 1;
}

int main(void)
{
	int x = 10;
	int *ptr = &x;

	printf("%d\n", x);
	increment(ptr);
	printf("%d\n", x);

	return (0);
}
