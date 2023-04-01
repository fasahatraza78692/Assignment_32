#include<iostream>
using namespace std;
class A
{
	int x;
	  public:
	  	A()
	  	{ 
		  x=0;
		  cout<<"Class A Default constructor called :"<<endl;
	    }
	  	A(int a)
	  	 {
	  	 	x=a;
	  	 	cout<<"Class A Paramerized constructor :"<<endl;
	     }
        void Display()
         {
         	cout<<"X = "<<x<<endl;
		 }
};
class B : public A
{
	int b;
	  public:
	  	B():A()
	  	{
	  		b=0;
	  		cout<<"Class B Default constructor called :"<<endl;
	    }
	    B(int x):A(x)
	     {
	     	b=x;
	     	cout<<"class B Parameterized constructor called :"<<endl;
		 }
       void Display()
        {
        	cout<<"B = "<<b<<endl;
		}
};
class C : public B
{
	int z;
	  public:
	  	 C()
	  	 {
	  	 	z=0;
	  		cout<<"Class C Default constructor called :"<<endl;
         }
         C(int Z):B(Z)
         {
         	z=Z;
	  		cout<<"Class C Parametrized constructor called :"<<endl;
		 }
        void Display()
         {
        	cout<<"Z = "<<z<<endl;
		 }
};
int main()
{
	A a1,a2(5);
	B b1,b2(3);
	C c1,c2(9);
	a1.Display();
	a2.Display();
	b1.Display();
	b2.Display();
	c1.Display();
	c2.Display();
	return 0;
}
