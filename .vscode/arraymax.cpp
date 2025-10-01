#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int smax = INT8_MIN;
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    cout<<max<<" "<<smax<<endl;
    return 0;
}