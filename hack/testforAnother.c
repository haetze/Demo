#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

int main(int argc, char * argv[])
{
    /*Spawn a child to run the program.*/
    char *argv2[]={"dart"};
    for (int i  = 1; i<sizeof(argv); i++){
		    argv2[i] = argv[i];
    }	
    execv( "/Applications/dart/dart-sdk/bin/dart" ,argv2);
    return 0;
}
