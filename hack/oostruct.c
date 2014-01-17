#include <stdio.h>



//comment
struct Point2D{
	int x;
	int y;
	int (*test) (int n);
};
int (*)(int) returnTest(struct Point2D *p1){
	       return  int test(int n){return p1->x*n;};
}   
struct Point2D newPoint2D(int x, int y){
	struct Point2D p1 = {x,y};
	p1.test = returnTest(&p1);
	return p1;
}


struct Point3D{
	int z;
	struct Point2D xy;
};

struct Point3D newPoint3D(int x , int y, int z){
	struct Point3D p1 = {z,newPoint2D(x,y)};
	return p1;
	}


int main(int argc, char * argv[]){
	printf("hello world\n");
	struct Point3D p1 = newPoint3D(13,5,8);
	printf("%d\n", p1.xy.test(3));

}
