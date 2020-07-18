#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << setw(10) << setiosflags(ios::left) <<setfill('*') << 10 << endl;
    cout << setw(10) << setiosflags(ios::right) <<setfill('*') << 10 << endl;
    cout << setw(10) << setfill('*') << 10 << endl;

    int a=10;
    int b=20;
    cout.setf(ios::right,ios::adjustfield);
    cout.fill('0');
    cout << setw(5) << a <<endl;
    cout << setw(5) << b << endl;

return 0;
}

