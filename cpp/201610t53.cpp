#include <iostream>
using namespace std;
class Person {
    protected :
        char * name;
        char * sex;
        int age;
    public :
        Person() {}
        Person(char *name,char *sex,int age) {
            this->name = name;
            this->sex = sex;
            this->age = age;
        }
};
class Employee : public Person {
    private :
        char * department;
        double salary;
    public :
	Employee() {}
        Employee(char *name,char *sex,int age,char * department,double salary) {
		this->name = name;
		this->sex = sex;
		this->age = age;
		this->department = department;
		this->salary = salary;
	}
	void Display() {
            cout << name << age << sex << department << salary << endl;
        }
        virtual ~ Employee() {}
};


int main() {
    Employee e((char*)"Jack",(char*)"M",18,(char*)"IT",1000000);
    e.Display();
    return 0;
}
