#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
	int r;
	scanf_s("%d", &r);

	printf("%.6lf \n", M_PI*r*r);
	printf("%.6lf", 2.0 * r*r);

}
