#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int low, int high){
    while(low < high){
            swap(nums[low], nums[high]);
            low++;
            high--;
    }
}
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
}

void rotate2(vector<int>& nums, int k) {
        vector<int> temp(nums.size());

        for(int i=0;i< nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }

        nums = temp;
}

