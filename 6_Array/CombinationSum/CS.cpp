#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
vector<int> ds;

void findCombination(int ind, int target, vector<int> &arr)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    // pick an element
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr);
        ds.pop_back();
    }
    findCombination(ind + 1, target, arr);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    findCombination(0, target, candidates);
    return ans;
}

int main()
{

    vector<int> arr{2, 3, 6, 7};
    int target;
    cin >> target;
    vector<vector<int>> ans = combinationSum(arr, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j];
        }
        cout << "]"
             << " ";
    }
}