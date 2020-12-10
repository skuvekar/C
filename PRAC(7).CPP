//To create an object of a class and access class attributes

#include<iostream.h>
#include<conio.h>
#include<string.h>


/* 25_SHRUTI KUVEKAR
   SE EXTC
   SKILL LAB
   PRAC(7)*/

 //class named "Student" has been created
 class Student
 {
   public:
   int std_id;
   char std_nm[10];

 };

 void main()
  {  clrscr();
    //object "name" is instantiated
     Student name;
     strcpy(name.std_nm, "Vinay");
     name.std_id = 2028;
     cout<<"Student name is:"<<name.std_nm<<endl<<"Student id is:"<<name.std_id<<endl;
     getch();
   }





