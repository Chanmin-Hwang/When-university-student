#include <stdio.h>

#define OBJ(n,w) obj##n.pos_##w
#define PRT(n,w) printf("obj%1d.pow_"#w" : %.2f\n",n,obj##n.pos_##w)

struct pos{
	float pos_x;
	float pos_y;
	float pos_z;
};

int main(void)
{
	struct pos obj1,obj2;

	OBJ(1,x) = 12.3;
	OBJ(1,y) = 21.45;
	OBJ(1,z) = 39.32;
	OBJ(2,x) = 46.76;
	OBJ(2,y) = 23.99;
	OBJ(2,z) = 19.8;

	PRT(1,x);
	PRT(2,x);

	return 0;
}
