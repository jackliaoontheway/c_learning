#include <stdio.h>

int sum(int,int);

void cheer(int);

void swap();
void swap(void);

int main() {
	
	printf("begin + end = %d \n",sum(1,1));
	
	cherr(3.0);
	
	{
		int i = 10;
	};
	
	int i = 0;
	
	printf("%d", i);

	//swap(1,2);

	return 0;
}


int sum(int begin,int end) {
	return begin + end;
}

void cherr(int c) {
	printf("cherr %d\n",c);
}
