#include <bits/stdc++.h>
using namespace std;

void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans)
{
   if (index == nums.size())
   {
      ans.push_back(nums);
      return;
   }
   for (int i = index; i < nums.size(); i++)
   {
      swap(nums[index], nums[i]);
      recurPermute(index + 1, nums, ans);
      swap(nums[index], nums[i]);
   }
}
vector<vector<int>> permute(vector<int> &nums)
{
   vector<vector<int>> ans;
   recurPermute(0, nums, ans);
   return ans;
}


int main()
{

   vector<int> arr{1, 2, 3};
   vector<vector<int>> ans = permute(arr);

   for(int i=0; i<ans.size(); i++){
      cout<<"[";
      for(int j=0; j<ans[i].size(); j++){
         
         cout<<ans[i][j];
      }
      cout<<"]"<<" ";
   }

}
