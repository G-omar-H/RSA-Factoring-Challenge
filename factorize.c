#include "main.h"
/**
 * factorize - factorizing a number into two small numbers
 * @key: number to factorize
 * return: void.
 */
void factorize(int key)
{
	int num1 = 0, num2 = 0;

	for (num1 = 0; num1 < key; num1++)
	{
			for (num2 = 0; num2 < key; num2++)
			{
				if (num1 * num2 == key)
				{
					fprintf(stdout, "%d=%d*%d\n", key, num1, num2);
					fflush(stdout);
					return;
				}
			}
	
	}
}
