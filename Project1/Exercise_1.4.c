// 1.4 Write a program to print the corresponding Celsius to Fahrenheit table

#include<stdio.h>

int main() {
	int cels, fahr, lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("Celsius      Fahrenheit\n");
	cels = lower;

	while (cels <= upper) {
		fahr = (cels * (9.0 / 5.0)) + 32;
		printf("%3d          %3d\n", cels, fahr);
		cels = cels + step;
	}
	return 0;
}