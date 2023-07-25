#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>


int		main(int argc, char **argv)
{
	gid_t gid;
	uid_t uid;
	char *cmd[2];
	(void)argc;

	if (atoi(argv[1]) == 423)
	{
		cmd[0] = strdup("/bin/sh");
		cmd[1] = NULL;
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", cmd);
	}
	else
	{
		fwrite("No !\n", 5, 1, stderr);
	}
	return (0);
}