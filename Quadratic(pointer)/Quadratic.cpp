#include<stdio.h>
#include<math.h>
void solve(double a, double b, double c, double* x1, double* x2) {
	double k;
	k = sqrt(pow(b, 2) - (4 * a * c));
	*x1 = (-b + k) / (2 * a);
	*x2 = (-b - k) / (2 * a);
}

int main()
{
	double a, b, c;
	double x1, x2;
	printf("Please follow this pattern to add numbers \n ex) x^2 + 2x + 1 = 1 2 1 \n your number is :  ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (pow(b, 2) - (4 * a * c) > 0 && a != 0)
	{
		solve(a, b, c, &x1, &x2);
		printf("x1 = %.2lf x2 = %.2lf\n\n", x1, x2);
	}
	else if (pow(b, 2) - (4 * a * c) == 0 && a != 0)
	{
		printf("x = %.2lf\n\n", -b / (2.0 * a));
	}
	else
	{
		printf("This Quadratic Polynomial can not solve in real number\n");
	}


	return 0;
}

