#include <bits/stdc++.h>
using namespace std;

void swapIfGreater(vector<int> &arr1, vector<int> &arr2, int ind1, int ind2)
{
    if (arr1[ind1] > arr2[ind2])
    {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void merge1(vector<int> &nums1, vector<int> &nums2, int n, int m)
{
    vector<int> nums3;
    int left = 0;
    int right = 0;
    int index = 0;
    while (left < n && right < m)
    {
        if (nums1[left] <= nums2[right])
        {
            nums3[index++] = nums1[left++];
        }
        else
        {
            nums3[index++] = nums2[right++];
        }
    }
    // copy first vector remaining element
    while (left < n)
    {
        nums3[index++] = nums1[left++];
    }

    // copy second vector remaining element
    while (right < m)
    {
        nums3[index++] = nums2[right++];
    }

    for(int i = 0; i< m+n; i++){
        if(i<n) nums1[i] = nums3[i];
        else  nums2[i - n] = nums3[i];
    }

}

// without space
void merge2(vector<int> &nums1, vector<int> &nums2, int n, int m)
{

    int left = n - 1, right = m - 1, index = (m + n - 1);
    while (left >= 0 && right >= 0)
    {
        if (nums1[left] > nums2[right])
        {
            nums1[index--] = nums1[left--];
        }
        else
        {
            nums1[index--] = nums2[right--];
        }
    }
    while (left >= 0)
    {
        nums1[index--] = nums1[left--];
    }
    while (right >= 0)
    {
        nums1[index--] = nums2[right--];
    }
}

void merge3(vector<int> &nums1, vector<int> &nums2, int n, int m)
{
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m)
    {
        if (nums1[left] > nums2[right])
        {
            swap(nums1[left], nums2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
}

void merge4(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // arr1 and arr2
            if (left < n && right >= n)
            {
                swapIfGreater(arr1, arr2, left, right - n);
            }
            // arr2 and arr2 element
            else if (left >= n)
            {
                swapIfGreater(arr2, arr2, left - n, right - n);
            }
            // arr1 and arr1 element
            else
            {
                swapIfGreater(arr1, arr1, left, right);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main()
{
    int x, m, n;
    vector<int> arr1;
    vector<int> arr2;
    cin >> m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        arr2.push_back(x);
    }

    merge1(arr1, arr2, n, m);

    for (int i = 0; i < n; i++)
    {

        cout << arr1[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    // merge2(arr1, arr2, n, m);
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr1[i] << " ";
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    // merge3(arr1, arr2, n, m);
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr1[i] << " ";
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
    
    // merge4(arr1, arr2, n, m);
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr1[i] << " ";
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    return 0;
}