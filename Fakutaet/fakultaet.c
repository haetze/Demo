#include <stdio.h>

//fakultaets rechner
//
//
//

int calc(int n){
	if(n < 0)
		return -1* calc(n*-1);

	else if(n == 0)
		return 1;
	else if( n>1)
		return n*calc(n-1);
	else
		return 1;


}

int main(){
	int n=0;
	printf("Enter a number \n");
	scanf("%d",&n);
	printf("\n the answer is %d\n", calc(n));
	return 0;



}
