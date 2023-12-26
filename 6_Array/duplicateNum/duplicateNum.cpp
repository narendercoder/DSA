#include <bits/stdc++.h>
using namespace std;


// *find single
//  Tortoise and Hare Algo:
int findDuplicate1(vector<int> &nums)
{
    //start a fast and slow pointer
    //until they meet
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
     
     //as soon as they meet, move both
     //pointers at same speed until they
     //meet again 
    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int findDuplicate2(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all array elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    // XOR [1,n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

// *find all duplicates

// O(n^2)
vector<int> findAllDuplicates1(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
                ans.push_back(abs(nums[i]));
        }
    }
    //print array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
// O(nlogn)
vector<int> findAllDuplicates2(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
            ans.push_back(abs(nums[i]));
    }
    //print array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
// O(n) O(1)
vector<int> findAllDuplicates3(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
            ans.push_back(abs(nums[i]));

        nums[index] = -1 * nums[index];
    }

    //print array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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
    findAllDuplicates1(arr);
    // cout << ans << endl;
    return 0;
}
