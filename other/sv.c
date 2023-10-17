#include "main.h"

void sv(int x);
/*
 * sv - Entry point
 *
 *@x: input
 * Return: Nothing.
 */

void sv(int x)
{
	static int y;
	if (!y)
		y = 0;
	y += x;
	printf("%d\n", y);
}

int main(void)
{
	sv(1);
	sv(1);
	sv(1);
	sv(1);
}
