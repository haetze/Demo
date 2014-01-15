#include <stdio.h>


typedef struct dyn {
	struct dyn *befor;
	int value;
	struct dyn *next;} DYN;


void pointerStuff( DYN* x);

int main(){
	DYN i;
	DYN n;
	i.value = 123;
	n.value = 1;
	n.befor = &i;
	i.next = &n;
	pointerStuff(&n);
	printf("%d\n", n.next->value);
	if(n.next->next == NULL)
		printf("Last Element!!\n");
	return 0;

}



void pointerStuff(DYN* x){
	DYN a;
	a.value = 43;
	x->next = &a;
	a.befor = x;
	a.next = NULL;
	
}
