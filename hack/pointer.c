#include <stdio.h>

void increment(int *n);
void increment2(int n);

typedef struct Types {
	int n;
	int m;
}Type;

void sq(Type * n);


int main(){
	Type a ={12, 12};
	Type *b = &a;
	sq(b);
	printf("%d", (b)->n);
	return 0;



}



void increment(int *n){
	++(*n);
}

void increment2(int n){
	++n;
}

void sq(Type * n){
	n->n = 123; 
}
