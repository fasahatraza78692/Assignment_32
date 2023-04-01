#include<iostream>
using namespace std;
class FLOAT
{
	float x;
	  public:
	  	FLOAT(int x):x(x)
	  	{ }
	  	FLOAT()
	  	{ }
	  	void Display()
	  	 {
	  	 	cout<<x<<endl;
	     }
	  	FLOAT operator+(FLOAT f)
	  	 {
	  	 	FLOAT temp;
	  	 	temp.x=x+f.x;
	  	 	return temp;
	     }
        FLOAT operator-(FLOAT f)
	  	 {
		   	FLOAT temp;
	  	 	temp.x=x-f.x;
	  	 	return temp;
	     }
        FLOAT operator*(FLOAT f)
	  	 {
	  	 	FLOAT temp;
	  	 	temp.x=x*f.x;
	  	 	return temp;
	     }
        FLOAT operator/(FLOAT f)
	  	 {
	  	 	FLOAT temp;
	  	 	temp.x=x/f.x;
	  	 	return temp;
	     }
};
int main()
{
	FLOAT f1(5),f2(2),f3;
	f3=f1+f2;
	f3.Display();
	f3=f1-f2;
	f3.Display();
	f3=f1*f2;
	f3.Display();
	f3=f1/f2;
	f3.Display();
	return 0;
}
