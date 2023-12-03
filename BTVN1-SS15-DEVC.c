#include<stdio.h>
struct Person{
		char name[100];
		int age;
		char phoneNumbers[100];
		char email[100];
	};
int main(){
	struct Person person1;
	printf("Nhap ten:");
	gets(person1.name);
	printf("Nhap tuoi:");
	scanf("%d",&person1.age);
	getchar();
	printf("Nhap so dien thoai:");
	gets(person1.phoneNumbers);
	getchar();
	printf("Nhap email:");
	gets(person1.email);
	
	printf("ten:%s\n",person1.name);
	printf("Tuoi:%d\n",person1.age);
	printf("So dien thoai:%s\n",person1.phoneNumbers);
	printf("Email:%s\n",person1.email);
}
