#include<iostream>
using namespace std;
int main(){
int n, sum=0, pro=1,avg;
cout<<"enter the length of array:";
cin>>n;
int arr[n];
for(int i=0;i<n; i++){
  cin>>arr[i];
  sum +=arr[i];
  pro *=arr[i];
  avg = sum/n;
 }
 cout<<"sum is:"<<sum<<endl;
 cout<<"product is:"<<pro<<endl;
 cout<<"average is:"<<avg<<endl;
}