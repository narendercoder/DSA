#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> arr, int n)
{
    int current = arr[0];
    int jumps = 1;
    int farthest = arr[0];

    if (n == 1)
        return 0;

    else if (arr[0] == 0)
        return -1;

    else
    {
        for (int i = 1; i < n; i++)
        {

            if (i == n - 1)
            {
                return jumps;
            }

            farthest = max(farthest, arr[i] + i);
            current--;

            if (current == 0)
            {
                jumps++;
                if (i >= farthest)
                {
                    return -1;
                }
                current = farthest - i;
            }
        }
    }
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
    int ans = minJumps(arr, n);
    cout << ans << endl;
    return 0;
}