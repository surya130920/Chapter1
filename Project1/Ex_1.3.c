//Modify the temperature coversion program to print a heading above the table

#include<stdio.h>

main() {
	int fahr, cels, lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("Fahrenheit \tCelsius\n");
	fahr = lower;
	while (fahr <= upper) {
		cels = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, cels);
		fahr = fahr + step;
	}
}