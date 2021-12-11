#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void){
	pid_t pid;
	int status;
	for(int i=0;i<10;i++){
		pid = fork();
		if(pid < 0){
			fprintf(stderr, "fork error");
			return 1;
		}

		if(pid == 0) { //자식프로세스
			exit(0);
		}
	}
	char c = getchar();
}
