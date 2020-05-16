#include <stdio.h>

struct porint {
	int x;
	int y;
};

struct porint* getStruct(struct porint *p);
void output(struct porint p);
void print(const struct porint * p);


int main() {
	
	struct porint y = {0,0};
	
	getStruct(&y);
	
	output(y);
	
	output(*getStruct(&y));
	
	print(getStruct(&y));
	
	getStruct(&y)->x = 999;
	
	*getStruct(&y) = (struct porint){1,2};
	
	return 0;
}

struct porint* getStruct( struct porint *p) {
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("%d,%d\n",p->x,p->y);
	return p;
}

void output(struct porint p) {
	printf("%d,%d \n",p.x,p.y);
}

void print(const struct porint * p) {
	printf("%d,%d\n",p->x,p->y);
}

