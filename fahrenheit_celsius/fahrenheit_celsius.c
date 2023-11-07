#include <stdio.h>

int main()
{
	printf("Fahrenheit a Celsius table:\n");
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /*Limite superior de la tabla de temperaturas*/
	upper = 300; /*Limite superior*/
	step = 20; /*Tamaño del incremento que se usara en una estructura*/

	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
