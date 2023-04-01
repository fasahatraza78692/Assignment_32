#include<iostream>
using namespace std;
class Rectangle
{
	  public:
	  	int area(int l,int b)
	  	 {
	  	 	return l*b;
	     }
        double area(double l,double b)
	  	 {
	  	 	return l*b;
	     }
        double area(double l,int b)
	  	 {
	  	 	return l*b;
	     }
        double area(int l,double b)
	  	 {
	  	 	return l*b;
	     }
	     
};
int main()
{
	Rectangle r1,r2,r3,r4;
	cout<<"Area : "<<r1.area(5,2)<<endl;
	cout<<"Area : "<<r2.area(5.3,2.4)<<endl;
	cout<<"Area : "<<r3.area(7,2.4)<<endl;
	cout<<"Area : "<<r4.area(5.3,9)<<endl;
	return 0;
}
