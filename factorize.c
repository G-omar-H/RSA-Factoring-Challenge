#include "main.h"
/**
 * factorize - factorizing a number into two small numbers
 * @key: number to factorize
 * return: void.
 */
void factorize(long long int key)
{
	long long  int num1 = 1, num2 = 1;

	for (num1 = 1; num1 < key; num1++)
	{
		if (key % num1 == 0)
		{
			for (num2 = 1; num2 < key; num2++)
			{
				if (num1 * num2 == key)
				{
					fprintf(stdout, "%lli=%lli*%lli\n", key, num1, num2);
					fflush(stdout);
					return;
				}
			}
		}
	}
}
