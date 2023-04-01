#include<iostream>
using namespace std;
class Addition
{
	public:
		int add(int a,int b,int c=0)
		{
			return a+b+c;
		}
		double add(double a,double b,double c=0)
		{
			return a+b+c;
		}
		
};
int main()
{
	Addition a1,a2;
	cout<<"Addition = "<<a1.add(4,8,3)<<endl;
	cout<<"Addition = "<<a1.add(4,3)<<endl;
	cout<<"Addition = "<<a1.add(4.5,4.8,3.1)<<endl;
	cout<<"Addition = "<<a1.add(4.5,4.8)<<endl;
	return 0;
}
