#include<iostream>
#include<conio.h>
 
class Parent1
{
protected:
int a;
 
public:
 
Parent1()
{
a = 1;
}
};
 
class Parent2
{
 
protected:
int b;
 
public:
 
Parent2()
{
b= 2;
}
 
};
 
class Child: public Parent1, public Parent2
{
private:
int c;
 
public:
 
Child()
{
c= 0;
c= a + b;
}
 
void show()
{
std::cout<<"The value of data members of both classes A and B is "<<c<< std::endl;
}
};
 
main()
{
Child obj;
obj.show();
getch();
}
