#include <stdio.h>

typedef struct ADate {
	int month;
	int day;
	int year;
} Date;

// ע������ ADate ԭ��������
// Date �Ǳ��� 

typedef struct {
	int x;
	int y;
} Point;


// �Զ����������� 
int main() {
	
	typedef int Length; // ʹ��Length ��Ϊint���͵ı���
	Length a , b , len;
	Length numbers[10] = {1,2,3};
	
	typedef *char[10] Strings; // Strings ��10���ַ��������������
	typedef struct node {
		int data;
		struct node *next;
	} aNode; 
	
	return 0;
}



