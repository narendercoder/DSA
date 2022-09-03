#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> a, int n)
{
    // 1st step
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[res] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            count = 1;
            res = i;
        }
    }

    // 2nd step
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[res] == a[i])
            count++;
    }
    if (count <= n / 2)
        return -1;
    else
        return a[res];
}

int main()
{
    int n, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> ans;
    cout << majorityElement(arr, n) << endl;
}