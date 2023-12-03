#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
	int id;
	char nameBook[100];
	char author[100];
	float price;
	char genre[100]; 
};
void searchBook(char name[],int size) {
    for(int i = 0; i < size; i++) {
        if(strcmp(book[i].name, name) == 0) {
            printf("Cuon sach tim thay o vi tri: %d\n", i);
            return;
        }
    }
    printf("m dua bo a\n");
}
typedef struct {
    char title[50];
    float price;
} Book;
void searchBooksByPrice(Book books[], int n, float minPrice, float maxPrice) {
    printf("Cac sach trong khoang gia tu %.2f den %.2f:\n", minPrice, maxPrice);
    for (int i = 0; i < n; i++) {
        if (books[i].price >= minPrice && books[i].price <= maxPrice) {
            printf("%s: %.2f\n", books[i].title, books[i].price);
        }
    }
}
void sortBooks(Book books[], int n, int ascending) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if ((ascending && books[i].price > books[j].price) || (!ascending && books[i].price < books[j].price)) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}
typedef struct Book std;
void inputBook(std book[],int i){
	printf("Nhap id sach:");
	scanf("%d",&book[i].id);
	fflush(stdin);
	printf("Nhap ten sach:");
	gets(book[i].nameBook);
	printf("Nhap gia tien:");
	scanf("%f",&book[i].price);
	getchar();
	printf("Nhap ten tac gia:");
	gets(book[i].genre);
}
int main(){
	int minPrice,maxPrice,n;
	int size;
	int index;
	struct Book book[100];
	int books[100];
	do{
		printf("***************MENU***************\n");
		printf("1.Nhap so luong va thong tin sach\n");
		printf("2.Hien thi thong tin sach\n");
		printf("3.Them sach vao vi tri\n");
		printf("4.Xoa sach theo mau sach\n");
		printf("5.Cap nhat thong tin theo ma sach\n");
		printf("6.Sap xep sach theo gia(tang/giam)\n");
		printf("7.Tim kiem sach theo ten sach\n");
		printf("8.Tim kiem sach theo khoang gia\n");
		printf("9.Thoat\n");
		printf("Vui long nhap lua chon:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong sach:");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					inputBook(book,i);	
				}
				break;
			case 2:
				for(int i=0;i<size;i++){
					printf("Nhap id sach:%d\n",book[i].id);
					printf("Nhap ten sach:%s\n",book[i].nameBook);
					printf("Nhap gia tien:%f\n",book[i].price);
					printf("Nhap ten tac gia:%s\n",book[i].genre);
				}
				break;
			case 3:
				printf("Nhap vi tri:");
				scanf("%d",&index);
				for(int i=size;i>0;i--){
					book[i]=book[i-1];
					if(index==i){
						inputBook(book,i);
					}
				}
				size++; 
				break;
			case 4:
				printf("Nhap ma muon xoa:");
				scanf("%d",&index);
				for(int i=0;i<size;i++){
					if(i==index){
						book[i]=book[i+1];
					}
				}
				size--;
				break;
			case 5:
				printf("Nhap ma muon sua:");
				scanf("%d",&index);
				for(int i=0;i<size;i++){
					if(index==i){
						inputBook(book,i);
					}
				}
				break;
			case 6:
				printf("1. sap xep theo gia tang\n");
    			printf("2. sap xep theo gia giam\n");
    			printf("Do lua chon day: ");
    			int choice1;
    			scanf("%d", &choice1);
				switch (choice1) {
        			case 1:
            			sortBooks(books, 100, 1);
            			break;
        			case 2:
            			sortBooks(books, 100, 0);
            			break;
        			default:
            			printf("m dua bo a!!!");
            			break;
    			}
				break;
			case 7:
				printf("Enter book name: ");
                scanf("%s",&name);
                searchBook(name,size);
				break;
			case 8:
				printf("Enter book name: ");
                scanf("%s",&name);
                searchBook(name,size);
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("M dua bo a!!!!");
		}
	}while(1==1);
}
