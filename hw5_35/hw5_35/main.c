#include <stdio.h>
#include <stdlib.h>

unsigned long  int fibonacci(unsigned int n);
int main()
{
	int n;
	printf("想知道fibonacci數列的第n位為:");
	scanf_s("%d", &n);
	unsigned long int result = fibonacci(n);
	printf("第%d位為:%u", n,result);

}

unsigned long int fibonacci(unsigned int n)
{
	unsigned long int a = 0, b = 1, total;
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	for (int i = 3; i <= n; i++)
	{
		total = a + b;
		a = b;
		b = total;
	}
	return total;
}