#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
}Student;


int main(){
//structs=A custom combiner that holds multiple
//pieces of related information 
//Similar to Object in other languages

Student student1={"Superman",29,2.5,true};
Student student2={"Batman",27,3.5,false};
Student student3={"Spiderman",21,3.2,true};
Student student4={0};

strcpy(student4.name,"Iron man");
student4.age=35;
student4.gpa=4.0;
student4.isFullTime=false;



printf("%s\n",student1.name);
printf("%d\n",student1.age);
printf("%.2f\n",student1.gpa);
printf("%s\n\n",(student1.isFullTime)? "Yes":"No");

printf("%s\n",student2.name);
printf("%d\n",student2.age);
printf("%.2f\n",student2.gpa);
printf("%s\n\n",(student2.isFullTime)? "Yes":"No");

printf("%s\n",student3.name);
printf("%d\n",student3.age);
printf("%.2f\n",student3.gpa);
printf("%s\n\n",(student3.isFullTime)? "Yes":"No");

printf("%s\n",student4.name);
printf("%d\n",student4.age);
printf("%.2f\n",student4.gpa);
printf("%s\n\n",(student4.isFullTime)? "Yes":"No");



	return 0;
}
