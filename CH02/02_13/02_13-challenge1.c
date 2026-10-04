#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float ratio = 0.75f;
	char a;
	int b;
	float c;

	a = 'A';
	b = 10;
	c = 123.45;

	printf("the value of variable a is %c", a);
	printf("the value of variable b is %d", b);
	printf("the value of variable c is %.2f", c);
	printf("the value of constant ratio is %.2f", ratio);

	return 0;
}
