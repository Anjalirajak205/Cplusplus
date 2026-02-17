#include<iostream>
using namespace std;

int main (){
     int n ;
     cin>>n;

     string Team1,Team2,name;

     int count1=0;
     int count2=0;

     for(int i=0;i<n;i++){
        cin>>Team1;

        if(i==0){
            Team2=Team1;
            count1++;
        }
        else if(Team1==Team2){
           count1++;
        }
        else{
            count2++;
        }
     }
      if (count1 > count2)
        cout << Team2;
    else
        cout << Team1;   

    return 0;


}
