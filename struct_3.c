#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point pt1;
	struct point pt2;
};


int main() {
	
	// �ṹ���� 
	struct date arr[2] = {
		{
			1,1,2020
		},
		{
			2,2,2020
		}
	};
	
	struct rectangle r,*rp;
	rp = &r;
	
	r.pt1.x;
	
	rp->pt1.x;
	
	(r.pt1).x;
	
	(rp->pt1).x;
	
	(*rp).pt1.x;
	
	return 0;
}



