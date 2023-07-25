#include <stdio.h>

void p(const char *str) {
	printf(str);
}

void n() {
	char buffer[0x200];

	fgets(buffer, sizeof(buffer), stdin);
	p(buffer);
	if (*(int*)0x8049810 == 0x1025544) {
		system("/bin/cat /home/user/level5/.pass");
	}
}

int main() {
	n();
	return 0;
}
