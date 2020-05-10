#include <stdio.h>

int main() {
	
	int a = 2;
//	scanf("%d",&a);
	
	int i =a ,j = a,k = a;

	int cnt = 0;
	while(i <=  a+3) {
		j = a;
		while(j <= a+3) {
			k = a;
			while(k <= a + 3) {
				if(i != j && i != k && j != k) {
					printf("%d%d%d",i,j,k);
					cnt ++;
					if(cnt % 6 == 0) {
						printf("\n");
					} else {
						printf(" ");
					}
				}
				k++;
			}
			j ++;
		}
		i ++;
	}	
	
	
	return 0;
}
