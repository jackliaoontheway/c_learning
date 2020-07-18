#include <stdio.h>

#define PI 3.14

void fa(float r) {
	printf("%.2f \n", PI * r * r);
}


void fb(float r) {
	printf("%.2f \n", PI * 2*r);
}

int main(void) {

	int m;
	float r;
	printf("input m \n");
	scanf("%d",&m);

	printf("input r \n");
	scanf("%f", &r);


	switch(m) {
		case 1: fa(r); break;
		case 2: fb(r); break;
		case 3: fa(r);fb(r);break;
	}

	return 0;
}
