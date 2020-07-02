#include <iostream>
#include <string>
using namespace std;

class Birthday {
	private :
		int year;
		int month;
		int day;
	public :
		Birthday() {}
		Birthday(int year,int month,int day):year(year),month(month),day(day) {

		}
		void show() {
			cout << year << month << day << endl;
		}
};

class Person {
	private :
		char * name;
		char * sex;
		Birthday birthday;

	public :
		Person() {}
		Person(char * name,char * sex,int year,int month,int day):name(name),sex(sex),birthday(year,month,day) {}
		void show() {
			cout << name << sex << endl;
			birthday.show();
		}
};

int main(int argslen, char * args []) {
	char * name = (char*)"jack";
	char * sex = (char*)"a";
	Person person(name,sex,2000,12,12);
	person.show();

}
