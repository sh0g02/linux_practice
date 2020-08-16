#include <stdio.h>
#include <stdlib.h>

int
main(int args, char *argv[])
{
	int i;
	
	printf("args=%d\n", args);
	for (i = 0; i < args; i++) {
		printf("argv[%d]=%s\n", i, argv[i]);
	}
	exit(0);
}
