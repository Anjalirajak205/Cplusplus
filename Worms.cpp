// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     long long arr[100005];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(i>0){
//             arr[i] = arr[i] + arr[i-1];
//         }
//     }

//     int m;
//     cin>>m;

//     while(m--)
//      {
//         long long q;
//         cin>>q;
//         int left=0 , right=n-1;
//         while(left<right){
//             int mid = (left+right)/2;
//             if(arr[mid]>=0){
//                 right=mid;
//             }
//             else{
//                 left=mid+1;
//             }
//         }
//         cout<<left+1<<endl;
//      }
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prefix[100005];

    // Build prefix sum directly
    for (int i = 0; i < n; i++) {
        cin >> prefix[i];
        if (i > 0)
            prefix[i] += prefix[i - 1];
    }

    int m;
    cin >> m;

    while (m--) {
        int q;
        cin >> q;

        // Manual binary search
        int left = 0, right = n - 1;
        int ans = n - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (q <= prefix[mid]) {
                ans = mid;
                right = mid - 1;   // try earlier pile
            } else {
                left = mid + 1;
            }
        }

        cout << ans + 1 << "\n";  // piles are 1-indexed
    }

    return 0;
}