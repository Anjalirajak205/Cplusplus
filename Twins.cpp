#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n;
    int arr[100];
    int totalsum = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        totalsum += arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    int takesums = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        takesums +=arr[i];
        count++;
        if(takesums>totalsum-takesums){
            break;
        }

    }
    cout<<count;
}

