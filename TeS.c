#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	int array [10],i,j,t,n=10;
for(i=0;i<n;i++) {
	scanf("%d",&array[i]);
}

for(i=0;i<n-1;i++) {
	for(j=0;j<n-1-i;j++) {
		if(array[j] < array[j+1]) {
			t = array[j];
			array[j] = array[j+1];
			array[j+1] = t;
		}
	}
}

for(i=0;i<n;i++) {
	printf("%3d",array[i]);
}
		
}
