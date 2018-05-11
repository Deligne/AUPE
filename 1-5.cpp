#include "apue.h"

int main()
{
	int c;
	while((c=getc(stdin)) != EOF)
		if((putc(c,stdout))==EOF)
			err_sys("o e");
	if(ferror(stdin))
		err_sys("i e");
	exit(0);
}