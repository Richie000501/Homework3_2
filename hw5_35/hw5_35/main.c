#include <stdio.h>
#include <stdlib.h>

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
int main()
{
	int n;
	printf("稱笵fibonacci计材n:");
	scanf_s("%d", &n);
	unsigned long int result = fibonacci(n);
	printf("材%d:%u\n", n,result);
	unsigned long long c = 0, d = 1, fib = 1;
	unsigned int count = 1;
	while (fib <= ULLONG_MAX - d) { 
		fib = c + d;
		c = d;
		d = fib;
		count++;
	}
	printf("╰参纗程 Fibonacci 兜计%u癸莱 Fibonacci 计%llu\n", count , c);


}
