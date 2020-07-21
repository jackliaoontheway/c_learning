#include <iostream>

using namespace std;

class vehicle {
    private :
        int maxspeed,weight;
        int const tire;
    public :
    	vehicle() : tire(4) { // 常成员必须通过构造函数的初始化列表初始化 
    		// tire = 4; // error
		}
        void run() {
            cout << "running" << endl;
        }
        void stop() {
            cout << "stop" << endl;
        }
        void cc() const {}
        void change(const vehicle &c) {
        	// c.maxspeed = 123;  error; // 不能改 
        	cout << c.maxspeed << endl;  //  可以读 
        	// c.run(); // error  只能调用常函数 
        	c.cc();
		}
        ~vehicle() {}
};

class motorcar : virtual public vehicle {
    private :
        int seatnum;
};

class bicycle : virtual public vehicle {
    private :
        int height;
};

int main() {
	return 0;
}

