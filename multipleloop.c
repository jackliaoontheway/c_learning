#include <stdio.h>

void test();

int main () {
	
	int x = 2;

	int one ,two,five;

	for(one = 1; one< x*10;one++) {
		for(two = 1; two < x * 10 / 2; two ++) {
			for(five = 1; five < x * 10 / 5; five ++) {
				if(one + two *2 + five * 5 == x * 10) {
					printf("可以用%d个一角加%d个两角加%d个五角得到%d元\n",one,two,five,x);
					goto out;
				}
			}
		}		
	}
	out :
	printf("out");
	
	printf("\n");
	
	test();
	
	return 0;
}



void test() {
	
	int x = 2;

	int one ,two,five;

	int flag = 0;
	for(one = 1; one< x*10;one++) {
		for(two = 1; two < x * 10 / 2; two ++) {
			for(five = 1; five < x * 10 / 5; five ++) {
				if(one + two *2 + five * 5 == x * 10) {
					printf("可以用%d个一角加%d个两角加%d个五角得到%d元\n",one,two,five,x);
					flag = 1;
					break;
				}
			}
			if(flag == 1) {
				break;
			}
		}		
		if(flag == 1) {
			break;
		}
	}
	
}
