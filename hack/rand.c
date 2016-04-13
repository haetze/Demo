#include <time.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int r;
	for(int i = 0; i < 10000; i++){
		r = rand();
		printf("\n%d", r);
	}
	return 0;
}
