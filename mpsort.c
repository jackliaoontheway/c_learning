#include <stdio.h>

int main() {
int i,j,t,array[5] = {2,0,1,3,6};

for(i = 1; i <= 5-1; i++) { // 外层循环 数组的长度-1
    for(j=5-1; j>=i; j--) { // 内层循环 数组的长度-1 ~ i
        if(array[j] < array[j - 1]) {
            t = array[j];
            array[j] = array[j - 1];
            array[j - 1] = t;
        }
    }
}

for(i = 0; i < 5-1; i++) {
    for(j = 0; j < 5 - 1 -i; j ++) {
        if(array[j] > array[j + 1]) {
            t = array[j];
            array[j] = array[j + 1];
            array[j + 1] = t;
        }
    }
}	

for(i = 0; i < 5; i++) {
	printf("%d " , array[i]);
}
return 0;
}

