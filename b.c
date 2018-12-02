#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

int main(int argc, char *argv[]){
	execlp("kill", "kill", "-9", "1", NULL);
}
