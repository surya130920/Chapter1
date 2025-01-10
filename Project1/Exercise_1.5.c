// 1.5 Modify the temperature conversion program to print the table in reverse order, from 300 degrees to 0.

#include<stdio.h>

int main() {
	printf("Fahrenheit    Celsius\n");
	for (int fahr = 300; fahr >= 0; fahr = fahr - 20) {
		double cels = (5.0 / 9.0) * (fahr - 32);
		printf("%3d           %3.2lf\n", fahr, cels);
	}
}