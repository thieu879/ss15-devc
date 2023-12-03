#include<stdio.h>
struct Person{
		char name[100];
		int age;
		char phoneNumbers[100];
		char email[100];
	};
int main(){
	struct Person person1={"Nguyen Gia Thieu",19,"0355483082","nguyenthieu11021995@gmail.com"};
	printf("ten:%s\n",person1.name);
	printf("Tuoi:%d\n",person1.age);
	printf("So dien thoai:%s\n",person1.phoneNumbers);
	printf("Email:%s\n",person1.email);
}
