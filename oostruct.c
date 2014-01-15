#include <stdio.h>


struct Point{
	int x;
	int y;
};

int main(int argc, char * argv[]){
	printf("hello world\n");
	struct Point p1 = {1, 2};
	printf("%d\n", p1.x);

}
