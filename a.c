#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int main(int argc, char *argv[]){
	struct sigaction old, new;
	for(int i=1; i<64; i++){
		if(sigaction(i, &old, &new)!=0){
			printf("Proces %d nie może zostać obsłużony\n", i);
		}
	}
}
