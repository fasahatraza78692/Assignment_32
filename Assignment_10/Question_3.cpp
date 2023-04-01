#include<iostream>
using namespace std;
class Animal
{
	public:
		void sound()
		 {
		 	cout<<"Animal sound "<<endl;
		 }
		
};
class Dog : public Animal
{
	public:
		void sound()
		{
			cout<<"Doggy sound "<<endl;
		}
};
int main()
{
	Dog d1;
	Animal a1;
	d1.sound();
	a1.sound();
	return 0;
}
