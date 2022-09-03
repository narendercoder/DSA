#include <bits/stdc++.h>
using namespace std;

// *Note: Each element in the result must be unique
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    vector<int> ans;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(nums1[i]);

    for (int i = 0; i < m; i++)
    {
        int key = nums2[i];
        if (s.find(key) != s.end())
            ans.push_back(nums2[i]);
        s.erase(key);
    }
    return ans;
}

// *Note : both arrays are sorted in non-decreasing order
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    vector<int> arr2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    // vector<int> ans = findArrayIntersection(arr1, n, arr2, m);
    vector<int> ans = intersection(arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}