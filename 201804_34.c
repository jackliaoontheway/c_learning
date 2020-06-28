#include <stdio.h>

int move(int b[],int n,int m) {
	int i,j,temp;
	for(i=0;i<m;i++){
		temp = b[n-1];
		for(j=n-1;j>0;j--) {
			b[j] = b[j - 1];		
		}
		b[0] = temp;
	}
	
	return 1;
}

int main(void) {
	
	int n,m,b[20],i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) {
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	
	move(b,n,m);
		printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
}
