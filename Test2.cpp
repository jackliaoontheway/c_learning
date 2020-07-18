#include <iostream>

using namespace std;

class Base {
	const static int b;
	static int c;
	int d = 10;
};

const int Base::b = 10;
int Base::c = 20;
//int Base::d = 100;

int main() {
	
	
	
	return 0;
}
