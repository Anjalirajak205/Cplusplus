#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
   // cout << "start entering to add them,\ stop using -1" << endl;
    do
    {
       cin >> num;
       sum = sum + num;
       cout << "num =" << num;
    } while(num!=-1);
    cout << sum;
    
}