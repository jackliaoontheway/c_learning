#include <iostream>
#include <string>
using namespace std;

class Student {
	public :
		int age = 0;
		char * c;
};

int main(void) {
	string a = "a+b=12\n\t";
	cout << a.length() << endl;

	Student s;
	cout << s.age << *s.c ;
	
	int n = 5;
	printf("%d\n" , (n=3*4,n*5,n+1));

}
