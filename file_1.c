#include <stdio.h>

int main() {
	
	FILE *fp = fopen("12.in","r");
	if(fp) {
		int num;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	} else {
		printf("�޷����ļ�\n");
	}
	
	return 0;
}
