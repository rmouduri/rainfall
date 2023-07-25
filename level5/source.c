#include <stdio.h>
#include <stdlib.h>

void n() {
	char buffer[0x218];
	fgets(buffer, sizeof(buffer), stdin);
	printf(buffer);
	exit(1);
}

void o() {
	system("/bin/sh");
	_exit(1);
}

int	 main() {
	n();
	return 0;
}
