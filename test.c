#include <stdio.h>
#include <unistd.h>

int main (int argc, char* argv[]) {
	char *name[] = {
		"/bin/bash",
		"-c",
		"open -a DartEditor",
		NULL
	};
	execvp(name[0], name);
	return 0;
}
