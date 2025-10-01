#include<iostream>
using namespace std;

int main(){
 char alpha;
 cin>>alpha;
 switch(alpha)
 {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
       cout<<"vowel"<< endl;
       break;
    default:
       cout<<"consonant"<< endl;
 }
}