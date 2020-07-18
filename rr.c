#include <stdio.h>
#include <stdlib.h>
int main() {


	printf("%d\n", 3 >> 5); //0 
	printf("%d\n", 3 << 5); //96

	printf("%d\n", -3 >> 5 ); // -1
	printf("%d\n", -3 << 5 ); // -96


	char * str;
	gets(str);
	printf("%s",str);

	char c;
	int en = 0;
	int num = 0;
	printf("%s",str);
	while( (c = *(str++) ) != '\0' ) {
		if(c >= 'a' && c <= 'z') {
			en ++;
		}
		if(c >= 'A' && c <= 'Z') {
			en ++;
		}
		if(c >= '0' && c <= '9') {
			num ++;
		}
	}

	printf("en:%d,num:%d",en,num);

	if(1 == 1) {
	return 0;
	}
	float a [50] ;
	float sum,max,avg;
	int i;
	for(i=0;i<50;i++) {
		scanf("%f",&a[i]);
		sum += a[i];
		if(max < a[i]) {
			max = a[i];
		}
	}

	avg = sum / 50;

	printf("max:%f,avg:%f",max,avg);


	return 0;

}
