#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int h=0;

void handler(){
	//write(STDOUT_FILENO, "\n", 4);
	h = h+1;
}
int main(){
	struct sigaction sa;
	sa.sa_handler = handler;
	sigaction(10, &sa, NULL);
	printf("%d\n", getpid());
	while(1){
		sleep(1);
		printf("%d\n", h);
	}
}
