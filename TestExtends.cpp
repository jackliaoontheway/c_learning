#include <iostream>
using namespace std;
class A {
	public :
		A() {
		}
		A(A & a) {
			cout << "���ƹ��캯��" << endl;
			a.print(); // ������A������ �����B���ݹ��� ������õ���B��print
			print(); // ���캯��û�ж�̬�� ������õ���A��print 
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
	A a = b; // �����Ǹ��ƹ��캯�� �����a����A���ʵ�� ����B���ʵ�� 
	a.print(); // ���õ���A ��print����
	
	A & r = b; // ���������� r ��b��������� ��B���ʵ��  
	r.print(); // ���õ��� B ��print���� 
	
	A *p = &b;
	p->print();  // ���õ��� B ��print���� 
}
