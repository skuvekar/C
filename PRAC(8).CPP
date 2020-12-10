 //To create class methods

/* 25_SHRUTI KUVEKAR
   SE EXTC
   SKILL LAB - PRAC(8)*/

#include<iostream.h>
#include<conio.h>

 class Books
{ public:

     void comedy()
   {  cout<<"Bossypants and Yes Please are some comedy books.";
     }
     void horror()
   {   cout<<endl<<"Asylum and The Cellar are some books in the horror genre.";
     }

 };

     int main()
     { clrscr();
       Books obj;
       obj.comedy();
       obj.horror();
       return 0;
       getch();
     }




