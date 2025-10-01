#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int n=12345;
    for(int i=1;i<11;i++)
    {
        cout << n << " x ";
        cout << setw(2) <<i;
        cout << " = " << setw(6) << n*i << endl;

    }
       
  //cout<<setw(5)<<setfill('')  


    
}