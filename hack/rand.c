#include <time.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int r;
	while(0==0){
		r = rand();
		printf("\n%d", r);
		sleep(1);
	}
	return 0;
}
