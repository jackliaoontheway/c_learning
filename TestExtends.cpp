#include <iostream>
using namespace std;
class A {
	public :
		A() {
		}
		A(A & a) {
			cout << "复制构造函数" << endl;
			a.print(); // 这里是A的引用 如果是B传递过来 这里调用的是B的print
			print(); // 构造函数没有多态性 这里调用的是A的print 
		}
		virtual void print() {
			cout << "A" << endl;
		}
};

class B : public A {
	public :
		void print() {
			cout << "B" << endl;
		}
};

int main() {
	B b;
	A a = b; // 这里是复制构造函数 这里的a还是A类的实例 不是B类的实例 
	a.print(); // 调用的是A 的print方法
	
	A & r = b; // 这里是引用 r 是b对象的引用 是B类的实例  
	r.print(); // 调用的是 B 的print方法 
	
	A *p = &b;
	p->print();  // 调用的是 B 的print方法 
}
