#include <stdio.h>
#include <string.h>

void swap1() {
	char str1 [80], str2 [80], tmp [80];
        scanf("%s %s",str1,str2);

        printf("str1: %s ",str1);
        printf("str2: %s \n",str2);

        strcpy(tmp,str1);
        strcpy(str1,str2);
        strcpy(str2,tmp);

        printf("str1: %s ",str1);
        printf("str2: %s \n",str2);

}

void swap2() {

	char str1 [80], str2 [80];
        scanf("%s %s",str1,str2);

        printf("swapbefore str1: %s ",str1);
        printf("str2: %s \n",str2);

	int i;
	char tmp;
	for(i =0; i < 80; i ++) {
		tmp = str1[i];
		str1[i] = str2[i];
		str2[i] = tmp;
	}


        printf("swapafter str1: %s ",str1);
        printf("str2: %s \n",str2);


}

int main(int argslen, char * args []) {

	swap2();
}
