#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100005];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minTime=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minTime) {
            minTime = arr[i];
        }
    }
    int count=0;
    int index = 0;

     for (int i = 0; i < n; i++) {
        if (arr[i] == minTime) {
            count++;
            index = i + 1; 
        }
    }
     if (count > 1)
        cout << "Still Rozdil";
    else
        cout << index;

    return 0;

}