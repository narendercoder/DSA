#include <bits/stdc++.h>
using namespace std;

// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

// int maxSumSubarray1(vector<int> arr, int n)
// {
//     for(int i=0; i<n ; i++){
//         for(int j=i; i<n; j++){
//             for( int k=i; k<j; k++){

//             }
//         }
//     }
// }

// O(N^2) 

// int maxSumSubarray2(vector<int> arr, int n)
// {
//     int maxSum = INT_MIN;
//     for(int i=0; i<n ; i++){
//         int currSum = 0;
//         for(int j=i; i<n; j++){
//             currSum += arr[j];
//             if(currSum > maxSum){
//                 maxSum = currSum;
//             }
//         }
//     }
// }

// O(N) 
int maxSumSubarray3(vector<int> arr, int n)
{
    int currSum = 0;
    int maxSum = arr[0];
    for(int i=0; i<n ; i++){
        currSum = currSum + arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int ans = maxSumSubarray3(arr, n);
    cout << ans << endl;
    return 0;
}
