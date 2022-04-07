#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>


/**
 * @brief About the signals:
  SIGCHLD - child process terminated, stopped, or continued
  SIGFPE - floating point exception (division by zero)
  SIGABRT - abnormal termination (abort) signal from abort(3) function (core dump).
  SIGALRM - alarm clock (timer expired) signal.
  SIGUSR1 - user-defined signal 1.
 * @param signum 
 */

/*
	Explenation on signals and why we need them:
	Signals are used to notify the program that something has happened.
	To let 

*/

void handler(int signum)
{
	int x = 6;
	int y = 0;
	int z;

	switch (signum)
	{
	case SIGCHLD:
		fprintf(stdout, "SIGCHLD\n");
		fflush(stdout);
		z = x / y;

	case SIGFPE:
		fprintf(stdout, "SIGFPE\n"); 
		fflush(stdout);
		abort();
		printf("Press ^C to exit\n");
			 sleep(10);

	case SIGABRT:
		fprintf(stdout, "SIGABRT\n");
		fflush(stdout);
		alarm(3);

	case SIGALRM:
		fprintf(stdout, "SIGALRM\n");
		fflush(stdout);
		raise(SIGUSR1);

	case SIGUSR1:
		fprintf(stdout, "SIGUSR1\n");	
		fflush(stdout);
		exit(1);

	default :
		exit(1);
}}

int main()
{
	int status;
	signal(SIGCHLD, handler);
	signal(SIGFPE, handler);
	signal(SIGABRT, handler);
	signal(SIGALRM, handler);
	signal(SIGUSR1, handler);
	

	if (!(fork()))
	{
		exit(1);
	}
	wait(&status);
	return 0;
}