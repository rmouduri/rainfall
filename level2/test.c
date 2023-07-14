#include <unistd.h>

void test() {}

int main(int argc, char **argv, char **env) {
	test();
	execve("/bin/sh", NULL, NULL);

	return 0;
}