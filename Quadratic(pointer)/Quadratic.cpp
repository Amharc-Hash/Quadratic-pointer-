#include<stdio.h>
#include<math.h>
void solve(double a, double b, double c, double* x1, double* x2) {
	double m;
	m = sqrt(pow(b, 2) - (4 * a * c));
	*x1 = (-b + m) / (2 * a);
	*x2 = (-b - m) / (2 * a);
}

int main()
{
	double k[1000];
	double x1, x2;
	printf("Please follow this pattern to add numbers \n ex) x^2 + 2x + 1 = \n1\n2\n1 \n your number is :\n");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%lf", &k[i]);
	}
	if (pow(k[1], 2) - (4 * k[0] * k[2]) > 0 && k[0] != 0)
	{
		solve(k[0], k[1], k[2], &x1, &x2);
		printf("x1 = %.2lf x2 = %.2lf\n\n", x1, x2);
	}
	else if (pow(k[1], 2) - (4 * k[0] * k[2]) == 0 && k[0] != 0)
	{
		printf("x = %.2lf\n\n", k[1] / (2.0 * k[0]));
	}
	else
	{
		printf("This Quadratic Polynomial can not solve in real number\n");
	}


	return 0;
}

