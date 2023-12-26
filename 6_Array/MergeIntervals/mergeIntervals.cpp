#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    // brute force
    vector<vector<int>> ans;
    if (intervals.size() == 0)
    {
        return ans;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for (int i = 0; i < intervals.size(); i++)
    {
        if (intervals[i][0] <= tempInterval[1])
        {
            tempInterval[1] = max(intervals[i][1], tempInterval[1]);
        }
        else
        {
            ans.push_back(tempInterval);
            tempInterval = intervals[i];
        }
    }
    ans.push_back(tempInterval);
    return ans;
}

int main(){

   vector<vector<int>> intervals = [[1,3],[2,6],[8,10],[15,18]];

    merge(intervals)
    return 0;
}