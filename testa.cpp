#include <iostream>
using namespace std;

class A {
	public :
		int id;
};

int main() {
	
	A a;
	A b;
	a.id = 100;
	b.id = 200;
	
	// cout << a << endl; //error 不能输出 
	cout << &a << endl;
	
	A ar [] = {{},{}};
	A * pa = ar; // ar 本质上是 指针常量 第一个元素的地址 所以可以赋值给指针 
	//A * px = a; // error C++的对象名不是地址 而是对象的值 必须通过&取地址赋值给指针 
	b = a;// 不是将a的地址赋值b 这里会调用赋值构造函数 b != a, 这和Java不一样,b=a 之后 a和b不是指向同一块内存 
	A * p = &a;
	cout << p->id << endl;
	p = &b;
	cout << p->id;
	
	return 0;
}
