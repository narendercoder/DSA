#include <bits/stdc++.h> 

int isPreorderValid(vector<int> &arr) 
{
   stack<int> stk;
   int n = arr.size();
   int root = INT_MIN;
   for (int i=0; i<n; i++) {
      if (arr[i] < root)
         return 0;
      while (!stk.empty() && stk.top()<arr[i]) {
         root = stk.top();
         stk.pop();
      }
      stk.push(arr[i]);
   }
   return 1;
     
}
