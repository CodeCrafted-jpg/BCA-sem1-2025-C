#include <stdio.h>

 struct Book
{
  char Name[30];
  float  price;
  char author[50];
  int isbn;
};
void Print(struct Book book);
int main(){
    struct  Book book1={"Let us see",150.0,"Yashavant Kanetkar",3443};
    Print(book1);

}
void Print(struct Book book){

      printf("Name: %s \n", book.Name);
      printf("Price: %.2f \n" , book.price);
      printf("Author: %s \n" , book.author);
      printf("Isbn v: %d \n" , book.isbn);
      
}