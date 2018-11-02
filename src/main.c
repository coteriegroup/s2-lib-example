#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <sqeq.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		fprintf(stderr, "wrong args count\n");
		return 1;
	}
	float a = atof(argv[1]);
	float b = atof(argv[2]);
	float c = atof(argv[3]);
	roots r = solve(a, b, c);
	if (isnan(r.x1) || isnan(r.x2))
	{
		fprintf(stderr, "not a square equation or D < 0\n");
		return 2;
	}
	printf("%gx^2+%gx+%g = 0 has solution:\n", a, b, c);
	printf("x1 = %g\nx2 = %g\n", r.x1, r.x2);
	return 0;
}
