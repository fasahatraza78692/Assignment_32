#include<iostream>
using namespace std;
class player
{
	int player_no,no_of_matches;
	string player_name;
	int *goals;
	  public:
	  	 player(int p_no, string p_name, int n_matches)
	  	  {
	  	  	player_no=p_no;
	  	  	player_name=p_name;
	  	  	no_of_matches=n_matches;
	  	  	goals=new int [no_of_matches];
	  	  	 for(int i=0;i<no_of_matches;i++)
	  	  	  {
	  	  	  	cout<<"Enter No. of Goals in Match "<<i+1<<" : ";
	  	  	  	cin>>goals[i];
			  }
		  }
		  void Diaplay()
		   {
		   	  cout<<"----------------------------------------------"<<endl;
		   	  cout<<"Player No.            : "<<player_no<<endl;
		   	  cout<<"Player Name           : "<<player_name<<endl;
		   	  cout<<"No. of Matches Played : "<<no_of_matches<<endl;
		   	  for(int i=0;i<no_of_matches;i++)
		   	   cout<<"Match "<<i+1<<" Goals : "<<goals[i]<<endl;
		   }
};
int main()
{
	player p1(154,"Fasahat",4);
	p1.Diaplay();
	return 0;
}
