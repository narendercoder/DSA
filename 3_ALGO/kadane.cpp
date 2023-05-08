// Kadane's Algorithm
#include <bits/stdc++.h>
using namespace std;

// Brute force approach
int maxSubarraySum(vector<int> &arr)
{
  int n = arr.size();
  int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i <= n - 1; i++){
    for (int j = i; j <= n - 1; j++){
      currSum += arr[j];
      if (currSum > maxSum)
      {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}

// Efficient approach
int maxSubarraySum2(vector<int> &arr)
{
  int n = arr.size();
  int maxSum = INT_MIN;
  int currSum = 0;

  for (int i = 0; i <= n - 1; i++){
    currSum += arr[i];
    if (currSum > maxSum){
      maxSum = currSum;
    }
    if (currSum < 0){
      currSum = 0;
    }
  }
  return maxSum;
}

int minSubarraySum2(vector<int> &arr)
{
  int n = arr.size();
  int minSum = INT_MAX;
  int currSum = 0;

  for (int i = 0; i <= n - 1; i++){
    currSum += arr[i];
    if (currSum > minSum){
      minSum = currSum;
    }
    if (currSum > 0){
      currSum = 0;
    }
  }
  return minSum;
}

int main()
{
  // Your code goes here;
  vector<int> a = {1, 3, 8, -2, 6, -8, 5};
  cout << maxSubarraySum2(a) << endl;
  return 0;
}