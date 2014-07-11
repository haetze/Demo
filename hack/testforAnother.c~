#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

int main(int argc, char * argv[])
{
    /*Spawn a child to run the program.*/
    char *argv2[]={"elinks", argv[1], argv[2],  NULL};
    execv( "/usr/local/Cellar/elinks/0.11.7/bin/elinks" ,argv2);
    //exit(127); /* only if execv fails */
        return 0;
}
