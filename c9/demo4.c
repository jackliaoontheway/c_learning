#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
struct student {
	char name [10];
	int age;
} stds [SIZE];
void save() {
	FILE *fp = fopen("demo4","wb");
	if(fp == NULL) {
		printf("open file error");
		exit(1);
	}
	int i;
	for(i=0;i<SIZE;i++) {
		// 注意  fwrite 的参数 第一个是指针 所以要 &stds[i]  如果使用stds[i] 是直接复制结构体的值 类型不一致 
		if(fwrite(&stds[i],sizeof(struct student),1,fp) != 1) {
			printf("file write error \n");
		}
		
		// fprintf(fp,"%s %d \n",stds[i].name,stds[i].age);
	}
	fclose(fp);
}
void display() {
	FILE *fp = fopen("demo4","rb");
	if(fp == NULL) {
		printf("open file error");
		exit(1);
	}
	int i;
	for(i=0;i<SIZE;i++) {
		fread(&stds[i],sizeof(struct student),1,fp);
		// fscanf(fp,"%s %d",stds[i].name,&stds[i].age);
		printf("%s %d \n",stds[i].name,stds[i].age);
	}
	fclose(fp);
}
int main() {
	
	int i;
	for(i = 0; i < SIZE; i++) {
		scanf("%s%d",stds[i].name,&stds[i].age);
		printf("%d",i);
	}
		
	save();
	display();
	return 0;
}
