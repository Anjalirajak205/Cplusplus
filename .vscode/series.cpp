#include<iostream>
using namespace std;

int main()
{
    int i,j,k,s=0,f,p;
    for(i=1;i<=5;i+=2)
    {
        f=1;
        for(j=1;j<=i;j++)//factorial
        {
           f=f*j;
        }
        p=1;
        for(k=1;k<=i;k++)//power
        {
           p=p*i;
        }
        s=s+f/p;
    }

        cout<<s<<endl;
    }
    
    
