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
	
	// cout << a << endl; //error ������� 
	cout << &a << endl;
	
	A ar [] = {{},{}};
	A * pa = ar; // ar �������� ָ�볣�� ��һ��Ԫ�صĵ�ַ ���Կ��Ը�ֵ��ָ�� 
	//A * px = a; // error C++�Ķ��������ǵ�ַ ���Ƕ����ֵ ����ͨ��&ȡ��ַ��ֵ��ָ�� 
	b = a;// ���ǽ�a�ĵ�ַ��ֵb �������ø�ֵ���캯�� b != a, ���Java��һ��,b=a ֮�� a��b����ָ��ͬһ���ڴ� 
	A * p = &a;
	cout << p->id << endl;
	p = &b;
	cout << p->id;
	
	return 0;
}
