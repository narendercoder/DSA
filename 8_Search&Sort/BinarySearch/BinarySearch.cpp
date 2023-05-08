#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid;
    while (high >= low)
    {
        mid = low + (high - low) / 2;
        int x = nums[mid];
        if (x == target)
            return mid;
        if (x > target)
            high = mid - 1;
        else
            high = mid + 1;
    }

    return -1;
}

int main()
{
    int x, n,temp;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int ans = search(arr, x);
    cout << ans << endl;
    return 0;
}