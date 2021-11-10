#include <stdio.h>
#include <stdlib.h>

double Power(double, int);
void main(void)
{
	int k; double Ans;
	printf("Calculate the power of 3.5? Please enter k=");
	scanf_s("%d", &k); Ans = Power(3.5, k);
	printf("The %d power of 3.5 = %f\n", k, Ans);
	system("pause");
}

double Power(double X, int n)
{
	int i; double PowerXn = 1;
	for (i = 1; i <= n; i++)
		PowerXn = PowerXn * X;
	return PowerXn;
}