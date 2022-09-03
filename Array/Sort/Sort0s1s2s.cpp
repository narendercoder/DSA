// Given an array A[] consisting only 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
// This problem is also the same as the famous “Dutch National Flag problem”.

#include <bits/stdc++.h>
using namespace std;

// *Approch: 1- O(n logn)
int SortArr(vector<int> &nums){
    sort(nums.begin(), nums.end());

}
// *Approch: 2 - O(n)
int SortArr1(vector<int> &nums){
    int n = nums.size();
    int f=0,s=0,t=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)
        f++;
        else if(nums[i]==1)
        s++;
        else
        t++;
    }
      for(int i=0;i<f;i++){
       nums[i]=0;
    }
      for(int i=f;i<f+s+t;i++){
        nums[i]=1;
    }
      for(int i=f+s;i<f+s+t;i++){
        nums[i]=2;
    }
}
// *Approch: 3 - O(n)
int SortArr2(vector<int> &nums){
    int n = nums.size();
    int low=0,mid=0,high=n-1;
    while(mid <= high){
        int x = nums[mid];
        if(x==0){
          swap(nums[low], nums[mid]);
          low++;
          mid++;
        }
        else if(x==1){
          mid++;
        }
        else{
          swap(nums[high], nums[mid]);
          high--;
        }
    }

}
int main(){
 int n,x;
 cin>>n;
 vector<int> a;
 for(int i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
 }
 SortArr(a);
  for(int i=0;i<n;i++){
    cout << a[i] << " ";
 }

}