#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	printf("Cel   Fahr\n");

	celsius = lower;
	while(celsius <= upper) {
		fahr = (celsius * (9.0/5.0) + 32);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
