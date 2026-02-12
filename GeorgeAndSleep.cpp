#include<iostream>
//#include<bits/stdc++,h>
using namespace std;

int main (){
    string s,t;
    cin>>s;
    cin>>t;
    int sh = (s[0] - '0') *10 + (s[1] - '0');  // sh = sleep in hours
    int sm = (s[3] - '0') *10 + (s[4] - '0');  // sm = sleep in minutes

    int th = (t[0] - '0') * 10 + (t[1] - '0');   // th = time in hours 
    int tm = (t[3] - '0') * 10 + (t[4] - '0');   // tm = time in minutes

     int ct = sh * 60 + sm;
    int sleep = th * 60 + tm;
   
    int f = ct - sleep;
    // cout<<f;
   
    if (f<0){
        f += 1440;
    }
 
    int resh = f / 60;
    int resm = f % 60;

    if(resh<10) cout<<"0";
    cout<<resh<<":";

    if(resm<10) cout<<"0";
    cout<<resm;
    return 0;
   
}
