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
	// 注意 struct 的变量 不是地址 和数组不一样 数组的变量就是指针 
	//  struct 传参时 ， 是复制一份新的struct 而不是同一个
	
	(*pDate).month = 11;
	*pDate->month = 12;  // 使用-> 表示指针所指的结构变量中的成员 
	 
	struct {
		int x;
		int y;
	} p1,p2;  //无名结构
	
	struct point {
		int x;
		int y;
	} p1,p2; // 声明同时定义p1 p2 变量 
		
	return 0;
}



