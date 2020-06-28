#include <stdio.h>

int main() {
	int i,j,t,index,array[5] = {2,0,1,3,6};
	
	for(i = 0; i < 5-1; i++) {
		index = i;
		for(j = i+1; j < 5; j++) {
			if( array[index] > array[j]) {
				index = j;
			}
		}
		if(index != i) {
		    t = array[index];
    		array[index] = array[i];
    		array[i] = t;
		}
	}
	
	for(i = 0; i < 5; i++) {
		printf("%d " , array[i]);
	}
	return 0;
}

