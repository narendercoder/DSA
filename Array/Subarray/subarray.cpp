#include <bits/stdc++.h>
using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int n = nums.size();
    int sum = 0;
    int res = 0;
    unordered_map<int, int> prevSum;
    prevSum[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        int rem = sum % k;
        if (rem < 0)
        {
            rem += k;
        }
        if (prevSum.find(rem) != prevSum.end())
        {
            res += prevSum[rem];
        }

        prevSum[rem]++;
    }
    return res;
}

int main()
{
    vector<int> arr{4, 5, 0, -2, -3, 1};
    int target;
    cin >> target;
    int ans = subarraysDivByK(arr, target);
    cout << ans << endl;
}