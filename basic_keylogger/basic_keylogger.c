/* A este programa el llamo 'basic keylogger' por que muestra en pantalla lo que escribo, ya que es algo muuuyyy basico :V */

#include <stdio.h>

int main(){

	int c;

	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
}
