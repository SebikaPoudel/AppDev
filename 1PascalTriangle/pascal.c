#include<stdio.h>
#include "screen.h"

void pascal_triangle(int rows)
{
	int i, k;
	int p = RED;
	clearScreen();
	gotoXY(1, 30);
	printf("Pascal Triangle");
	resetColors();
	for (i = 0; i < rows; i++)
	{
		gotoXY(i + 1, 40 - i * 2);
		if (p>CYAN)
		{
			p = RED;
			setFGcolor(p);
		}
		else
		{
			setFGcolor(p);
		}
		
		for (k = 0; k <= i; k++)
		{
			printf("%3d ", binomial(i, k));
		}
		printf("\n");
		p++;
	}
	
}

int binomial(int n, int k)
{
	return factorial(n) / factorial(k) / factorial(n - k);
}

int factorial(int m)
{
	if (m == 0) return 1;
	return m * factorial(m - 1);
}