#include<iostream>
using namespace std;

int main()
    {
        double ebill;
        int units;
        cin>>units;

        if(units<=100)
          {
             ebill=units*3.36;
          }
         else if(units<=300)
          {
            ebill=100*3.36 + (units-100)*7.34;
          } 
         else if(units<=500)
          {
            ebill=100*3.36+200*7.34  +(units-300)*10.37;
          }
          else{
            ebill=100*3.36 + 200*7.34 +200*10.37 + (units-500)*11.86;
          }
           cout<< ebill <<endl;
         
    }