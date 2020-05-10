#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	
	int num = 1;
	int i = 1;
	while(i < n) {
		num *= 10;
		i ++;
	}
	printf("%d \n",num);
	int j = num;
	while(j < num * 10) {
		int t = j;
		int sum = 0;
		do{
			int d = t % 10;
			t /= 10;
			int k = 1;
			int p = d;
			while(k < n) {
				p *= d;
				k ++;
			}
			sum += p;
		}while(t > 0);
		if(sum == j) {
			printf("%d 是水仙花数 \n",j);
		}
		j++;
	}
	
	
	return 0;
}
