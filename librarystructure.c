#include<stdio.h>//Define a structure Book with members: title, author, and price. Input and display details of 3 books.
typedef struct{
    char title[20];
    char author[20];
    float price;

}BOOK;
BOOK book[3];
int main(){
    for(int i= 0;i<3;i++){
        printf("enter the book title :");
    scanf("%s",book[i].title );
     printf("enter the book author :");
     scanf("%s",book[i].author);

      printf("enter the book price :");
      scanf("%f",&book[i].price);

}
for(int i = 0;i<3;i++){
    printf("the title%s\n,author%s\n and the %f price\n is\n",book[i].title,book[i].author,book[i].price);


}


return 0;

    }
   