#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void n() {
	system("/bin/cat /home/user/level7/.pass");
}

void m() {
	puts("Nope");
}

int main(int argc, char *argv[]) {
	char *str;
	void *(*func)();

	str = malloc(64);

	func = (void *)m;
	strcpy(str, argv[1]);

	(**func)();

	return (0);
}