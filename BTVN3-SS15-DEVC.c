#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
struct Student{
	char name[100];
	int age;
	char phoneNumbers[100];
	char email[100];
};
typedef struct Student std;
void inputStudent(std student[],int i){
	fflush(stdin);
	printf("\nNhap ten:");
	gets(student[i].name);
	printf("\nNhap tuoi:");
	scanf("%d",&(student[i].age));
	getchar();
	printf("\nNhap so dien thoai:");
	gets(student[i].phoneNumbers);
	fflush(stdin);
	printf("\nNhap email:");
	gets(student[i].email);
} 
int main(){
	int a,deleteIndex,index;
	int size;
	struct Student student[100];
	char name[100];
	int age;
	char phoneNumbers[100];
	char email[100];
	printf("Nhap kich co:");
	scanf("%d",&size);
	do{
		printf("1.Nhap va Them\n");
		printf("3.Sua\n");
		printf("4.xoa\n");
		printf("5.In ra\n");
		printf("6.Thoat\n");
		int choice;
		printf("Vui long nhap lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for (int i=0;i<size;i++){
					inputStudent(student,i);
				}
				break;
			case 2:
				printf("Nhap vi tri:");
				scanf("%d",&index);
				for(int i=size;i>0;i--){
					student[i]=student[i-1];
					if(index==i){
						inputStudent(student,i);
					}
				}
				size++; 
				break; 
			case 3:
				printf("Nhap vi tri sua:");
				scanf("%d",&a);
				for(int i=0;i<size;i++){
					if(a==i){
						inputStudent(student,i);
						break;
					}
				}
				break;
			case 4:
				printf("Nhap vi tri muon xoa:");
				scanf("%d",&deleteIndex);
				for(int i=0;i<size;i++){
					if(i==deleteIndex){
						student[i]=student[i+1];
					}
				}
				size--; 
				break;
			case 5:
				for(int i=0;i<size;i++){
					printf("Ten:%s\n",student[i].name);
					printf("Tuoi:%d\n",student[i].age);
					printf("so dien thoai:%s\n",student[i].phoneNumbers);
					printf("email:%s\n",student[i].email);
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("M dua t a!!!");
		}
	}while(1==1);
}
