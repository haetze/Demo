#include <stdio.h>

void increment(int *n);
void increment2(int n);

int main(){
	int a = 4;
	int *b = &a;
	printf("Momentan ist a = %d \n jetzt wird a als erstes ohne pointer incrementiert\n", a);
	increment2(a);
	printf("a ist immer noch %d\n jetzt mit pointer", a);
	increment(b);
	printf("\n\na ist jetzt %d\n", a);


	return 0;



}



void increment(int *n){

	++(*n);
}

void increment2(int n){


	++n;

}
