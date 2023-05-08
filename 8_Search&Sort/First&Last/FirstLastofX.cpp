#include <bits/stdc++.h>
using namespace std;

int first(vector<int> &arr, int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}

int last(vector<int> &arr, int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}

vector<int> find(vector<int> &arr, int n , int x )
{
    vector<int> ans;
    int f = first(arr,0,n-1,x,n);
    int l = last(arr,0,n-1,x,n);
    ans.push_back(f);
    ans.push_back(l);
    return ans;
}
int main() {
	int x,n,temp;
    cin>>n>>x;
    vector<int> arr;
    for (int i = 0; i < n; i++)  
    {  
         cin>>temp;
         arr.push_back(temp);  
    }  
    vector<int> ans;
    ans = find(arr,n,x);
    cout<<ans[0]<<" "<<ans[1]<<endl;
     return 0;
}