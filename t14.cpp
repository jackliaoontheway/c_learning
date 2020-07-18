#include <iostream>

using namespace std;

class Computer {
	private:
		int cpu;
	public:
		Computer(int cpu) {
			this->cpu = cpu;
			cout << "constructor" << endl;
		}
		int getCpu() {
			return cpu;
		}
};


int main(void) {
	// cout << "Hello World" << endl;
	Computer c(1),b(3);
	Computer x = 8;
	cout << "getCpu = " << x.getCpu() <<endl;

	int a =66;
	int * p = &a;
	char * dp = (char*)p;
	 
	cout << (int)*dp << endl;

	int xi = 15;
	cout << (xi <= 10 ? 20 : 30) << endl;
}
