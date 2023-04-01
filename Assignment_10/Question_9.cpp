#include<iostream>
using namespace std;
class Area
{
	 double area;
      public:
	   	 Area(double h,double b)
	   	  {
	   	  	area=0.5*h*b;
          }
         Area(int l,int b)
          {
          	area = l*b;
		  }
         Area(double r)
          {
          	area = 3.14*r*r;
		  }
          void Display()
           {
           	 cout<<"Area = "<<area<<endl;
		   }
};

int main()
{
	int n;
	cin>>n;
	switch(n)
	 {
	 	case 1:
	 		Area ar(3.6,2.9);
	 		ar.Display();
	 		break;
 		case 2:
 			Area ar1(5,2);
 			ar1.Display();
 			break;
		case 3:
			Area ar2(2.0);
			ar2.Display();
			break;
	 }
	return 0;
}
