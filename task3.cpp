//Составить программу определения периметра правильного -n угольного описанного около окружности заданного радиуса R
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#include <cmath>

int main()
{
	int n;
	double r;
	double p;
	printf("Vvedite skolko uglov budet \n");
	scanf("%d", &n);
	printf("Vvedite radius okruzhosti opissanogo v vashu %d ugolnuy figuru", n);
	scanf("%g", &r);
	p = 2 * r * n * sin(M_PI / n) * cos(M_PI / r);
	printf("Perimetr vashego %d ugolniy viguri raven %g", n, p);
}
