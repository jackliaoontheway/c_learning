#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};
	

int main() {
	
	struct date  today;
	today.month = 07;
	today.day = 16;
	today.year = 2020;
	
	struct date yesterday = {
		07,31,2020
	};
	
	struct date lastday = {
		.month = 9,.year = 2020
	};
	
	struct date monday = (struct date) {
		07,08,2020
	};
	
	struct date *pDate = &today; 
	// ע�� struct �ı��� ���ǵ�ַ �����鲻һ�� ����ı�������ָ�� 
	//  struct ����ʱ �� �Ǹ���һ���µ�struct ������ͬһ��
	
	(*pDate).month = 11;
	*pDate->month = 12;  // ʹ��-> ��ʾָ����ָ�Ľṹ�����еĳ�Ա 
	 
	struct {
		int x;
		int y;
	} p1,p2;  //�����ṹ
	
	struct point {
		int x;
		int y;
	} p1,p2; // ����ͬʱ����p1 p2 ���� 
		
	return 0;
}



