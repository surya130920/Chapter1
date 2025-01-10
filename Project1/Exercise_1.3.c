//1.3 Modify the temperature coversion program to print a heading above the table
#include<stdio.h>

Main1_3() {
	int fahr, cels, lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("Fahrenheit      Celsius\n");
	fahr = lower;
	while (fahr <= upper) {
		cels = 5 * (fahr - 32) / 9;
		printf("%3d               %3d\n", fahr, cels);
		fahr = fahr + step;
	}
}