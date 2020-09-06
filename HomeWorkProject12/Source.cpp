#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int trinum = 0;
	int natnum = 0;
	int divisors;
	int i;
	while (1)
	{
		natnum++;
		trinum += natnum;
		divisors = 0;
		for (i = 1; i < (int)floor(sqrt(trinum)); i++)
		{
			if (trinum % i == 0) {
				divisors += 2;
			}
			if ((int)floor(sqrt(trinum)) * (int)floor(sqrt(trinum)) == trinum) {
				divisors--;
			}
		}
		if (divisors > 500) {
			break;
		}
	}
	printf("Triangle Number : %d Divisors : %d\n", trinum, divisors);
	return 0;
}