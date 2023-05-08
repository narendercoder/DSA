#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // *variable size array
    int *arr = new int[n];

    // *taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    // *print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // *deallocation of memory
    delete []arr;
    return 0;
}