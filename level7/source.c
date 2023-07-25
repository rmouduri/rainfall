#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char c[68];

void m() {
	printf("%s - %d\n", c, (int)time(0));
}

int main(int argc, char *argv[]) {
	int *ptr1 = malloc(8);
	*ptr1 = 1;
	ptr1[1] = malloc(8);

	int *ptr2 = malloc(8);
	*ptr2 = 2;
	ptr2[1] = malloc(8);

	strcpy((char*)ptr1, argv[1]);
	strcpy((char*)ptr2, argv[2]);

	fgets(c, 68, fopen("/home/user/level8/.pass", "r"));

	puts("~~");

	return 0;
}
