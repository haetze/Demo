#include "io.h"
#include <fcntl.h>
#include <stdio.h>
//programm to demonstrate file io required is a file named test.txt to read and write from/to
 
int main(){
	int fd = open("test.txt",O_RDWR,0755);
	char str[2048];
	int n = read(fd, str, 2048);
	char str2[49] = "das ist ja cool ich schreibe auf die festplatte\n";
	int size = sizeof(str2);
	int n2 = write(fd, str2, size-1);
     	printf("\n%s\n", str);	

	return 0;


}
