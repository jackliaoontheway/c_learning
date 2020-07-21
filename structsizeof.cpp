#include <iostream>
using namespace std;
struct D {
	int a;
	union {
		int b;
		double c;
	};
	D * d[2];
} d;
	static int s = 123;


int main() {
	cout << sizeof(int) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(struct D) << endl;

	struct D x;
	x.a = 123;
	
	d.d[0] = &x;
	
	cout << sizeof(d.d) << (d.d[0])->a << endl;	
	
	static int j;

	cout << j << s << endl;
}
