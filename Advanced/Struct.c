#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct 
{
  char Name[30];
  int age;
  float gpa;
  bool FullTimer;

}Student;


void Print(Student student);
int main(){
      Student student1={"Sayan",20,9.7,true};
      Student student2={"Sagnik",18,9.0,true};
      Student student3={"Ayush",19,9.2,true};
       Print(student1);
       Print(student2);
       Print(student3);

}

void Print(Student student){

      printf("Name: %s \n", student.Name);
      printf("Age: %d \n" , student.age);
      printf("GPA: %.2f \n" , student.gpa);
      printf("Full-Timer: %s \n", (student.FullTimer)?"yes":"no");
}