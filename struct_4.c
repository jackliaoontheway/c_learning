#include <stdio.h>

typedef struct ADate {
	int month;
	int day;
	int year;
} Date;

// 注意这里 ADate 原来的类型
// Date 是别名 

typedef struct {
	int x;
	int y;
} Point;


// 自定义数据类型 
int main() {
	
	typedef int Length; // 使得Length 成为int类型的别名
	Length a , b , len;
	Length numbers[10] = {1,2,3};
	
	typedef *char[10] Strings; // Strings 是10个字符串的数组的类型
	typedef struct node {
		int data;
		struct node *next;
	} aNode; 
	
	return 0;
}



