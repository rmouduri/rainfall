#include <stdlib.h>
#include <string.h>

char *p(char *arg, char *msg) {
	char	buffer[4096];

	puts(msg);
	read(0, buffer, 4096);
	*strchr(buffer, '\n') = 0;

	return (strncpy(arg, buffer, 20));
}

char *pp(char *buffer) {
	char			b[20];
	char			a[20];
	unsigned int	len;

	p(a, " - ");
	p(b, " - ");

	strcpy(buffer, a);

	len = strlen(buffer);

	buffer[len] = ' ';
	buffer[len + 1] = 0;

	return (strcat(buffer, b));
}

int main(void) {
	char	buffer[42]; //0x40 - 0x16

	pp(buffer);

	puts(buffer);

	return (0);
}