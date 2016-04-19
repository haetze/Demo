#include "stdlib.h"
#include "stdio.h"


int main(){
  printf("Elternprozess: ppid %d, pid %d\n", getppid(), getpid());
  int child_pid;
  child_pid = fork();
 

  if(child_pid == 0){
    printf("Kindprozess: ppid %d, pid %d\n", getppid(), getpid());
  }else if(child_pid > 0){
    printf("Elternprozess: pid %d, Kindpid %d\n", getpid(), getppid());
  }else{
    printf("Error\n");
  }

}
