#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a = 'X';
	char b = '-';
	int x, y;
	
	printf("(1)\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9))
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

	printf("(2)\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 8) || (i == 7)||
				(j == 0) || (j == 9) || (j == 1) || (j == 2) || (j == 8) || (j == 7))
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

	printf("(3)\n");

	x = 4;
	y = 5;
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == x))
			{
				printf("%c", a);
				x--;
			}
			else if ((i < 5) && (j == y))
			{
				printf("%c", a);
			}
			else if (i==4)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		y++;
		printf("\n");
	}

	printf("(4)\n");

	x = 1;
	y = 8;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i > 0) && (i<5)&&(j == x))
			{
				printf("%c", a);
			}
			else if ((i > 0) && (i < 5) && (j == y))
			{
				x++;
				printf("%c", a);
				y--;
			}
			else if (i == 0)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}

	printf("(5)\n");

	x = 9;

	for (int i = -0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i==j)
			{
				printf("%c", a);
			}
			else if (j==x)
			{
				printf("%c", a);
				x--;
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}
}