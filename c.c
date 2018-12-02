#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main(int argc, char *argv[]){
	for(int i=0; i<100; i++){
		if(fork()==0){
			execlp("kill", "kill", "-10", argv[1], NULL);
		}
		printf("signal no. %d sent \n", i);
//		sleep(1);
	}
}
