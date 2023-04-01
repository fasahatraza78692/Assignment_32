#include<iostream>
using namespace std;
class fact
{
	int a,x=1;
	  public:
	  	fact(int t)
	  	 {
	  	 	a=t;
	     }
	  	fact(const fact &ft)
	  	 {
	  	 	for(int i=1;i<=ft.a;i++)
	  	 	     x=x*i;
	       a=ft.a;
	     }
        void Display()
         {
         	cout<<"Factorial = "<<x<<endl;
		 }
};
int main()
{
	fact f(5);
	fact f1=f;
	f1.Display();
	return 0;
}
