#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);

int main(void)
{
	printf("add : %d, mul : %d\n", add(1,2), multiply(1,2));
	return 0;
}