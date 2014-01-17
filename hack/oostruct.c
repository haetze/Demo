#include <stdio.h>

//comment
struct Point2D{
	int x;
	int y;
	int (*test)(int n);
};

(*(test)(int n)) test (struct Point2D p1){
	return int (test) (int n){
		return p1*n;
	}
}

struct Point2D conPoint2D (int x, int y){
	struct Point2D p1 = { x, y};
	p1.test = test(p1); 
	return p1;
}

struct Point3D{
	struct Point2D xy;
	int z;
};

struct Point3D conPoint3D (int x, int y, int z){
	struct Point3D p1;
	p1.xy = conPoint3D(x, y);
	p1.z = z;
	return p1;
}

int main(int argc, char * argv[]){
	printf("hello world\n");
	struct Point3D p1 = conPoint3D(13,2,16);
	printf("%d\n", p1.xy.test(4));

}
