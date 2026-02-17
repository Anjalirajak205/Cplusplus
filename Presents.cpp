#include<iostream>
using namespace std ;

int main(){

    int n;
    cin>>n;

    int arr[100];
    int present[100];
    

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for (int i = 1; i <= n; i++) {
        present[arr[i]] = i;
    }

     for (int i = 1; i <= n; i++) {
        cout << present[i] << " ";
    }
}
    
    
