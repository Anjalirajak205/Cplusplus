#include<iostream>
using namespace std;

class car
{
	public:
		string Brand ;
		string Color ;
		
};
int main()
{
	car c1;
    cout<<c1.Brand<<endl;
    cin >>"Enter Brand:">>endl;
    cout<<c1.Color<<endl;
    cin<<"Enter Color:">>endl;
    cout<<"Brand"<<c1.Brand<<endl;
    cout<<"Color"<<c1.Color<<endl;
}


