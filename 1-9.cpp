#include "apue.h"

int main(int argc, char const *argv[])
{
	printf("%d %d\n",getuid(),getgid());
	exit(0);
}