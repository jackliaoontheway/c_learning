#include <stdio.h>

int main() {

	char ch,str[4],*strp=str;

	// ch = "MBA"; // error
	ch = 'M';
	// str = "MBA"; // error
	// str = 'M'; //error
	*str = 'M';
	str[0] = 'M';
	*strp = 'M';
	strp[0] = 'M';
	strp = "MBA";
	//strp[0] = 'M'; segement fault due to  strp = "MBA"
	//*strp='M'; segement fault
	// *strp = "MBA";//error

	
	printf("%d",(int)sizeof(strp));


}
