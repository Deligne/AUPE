#include "apue.h"
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
	char buf[MAXLINE];
	pid_t pid;
	int status;
	printf("%%");
	while(fgets(buf,MAXLINE,stdin) != 0){
		if(buf[strlen(buf)-1]=='\n')
			buf[strlen(buf)-1]=0;
	if((pid==fork()) < 0){
		err_sys("fork error");
	}else if(pid==0){
		execlp(buf,buf, (char*)0);
		err_ret("couldnot execute: %s", buf);
		exit(127);
	}
	if((pid==waitpid(pid, &status, 0)) < 0)
		err_sys("wait error");
	printf("%%");}
	exit(0);
}