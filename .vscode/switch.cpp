#include<iostream>
using namespace std;
int main(){
    char c;
    
    switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"vowel";
        break;
    default: cout<<"consonant";
    break;
  }
}