#include <iostream>
using namespace std;

int main() {

	int j,n;
	for(int i=1;i<=5;i++) {
		for(j=1;j<i;j++){
			cout << " ";
		}
		for(n=10-i-j+1;n>0;n--) {
			cout << "*";
		}
		cout << "\n";

	}


return 0;
}
