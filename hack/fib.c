#include "stdio.h"
#include "stdlib.h"

int fib(int);

int main(int argc, char ** argv){
  
  printf("%d\n", fib(atoi(argv[1])));
}


int fib(int n){
  int a = 0, b = 1;

  for(int i = 0; i < n; i++){
    int tmp = a;
    a = b;
    b = tmp + b;
  }

  return a;
}
