#include <iostream>

using namespace std;

class vehicle {
    private :
        int maxspeed,weight;
        int const tire;
    public :
    	vehicle() : tire(4) { // ����Ա����ͨ�����캯���ĳ�ʼ���б��ʼ�� 
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
        	// c.maxspeed = 123;  error; // ���ܸ� 
        	cout << c.maxspeed << endl;  //  ���Զ� 
        	// c.run(); // error  ֻ�ܵ��ó����� 
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

