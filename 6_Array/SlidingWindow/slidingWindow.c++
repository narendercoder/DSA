#include <bits/stdc++.h>
using namespace std;

// O(N * K) 
//O(1)
void printMax(vector<int>& nums, int n, int k){
    int j, max;
    for(int i=0; i<=n-k; i++){
        max = nums[i];
        for(j=1; j<k; j++){
            if(nums[i+j] > max){
                max = nums[i+j];
            }
        }
        cout<<max<<" ";
    }
}

//Using AVL tree / priority queue
void printMax2(vector<int>& nums, int n, int k){
    // defining priority queue
    priority_queue<int> pq;
    vector<int> res;
    int i=0;
    for(; i < k; i++){
        for(; i < n; i++){
            
        }
        
    }
}


int main() {
    vector<int>nums{1, 3, 5, 6, 8, 9, 3, 8};
    int k = 3;
    printMax(nums, nums.size(), 3);
}
  


