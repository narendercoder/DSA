#include <bits/stdc++.h>
using namespace std;

void Transpose(vector<vector<int>> &arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void PrintVec(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    int temp;
    vector<vector<int>> arr;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    cout<<"Before Transpose: "<<endl;
    PrintVec(arr);
    Transpose(arr,N);
    cout<<"After Transpose: "<<endl;
    PrintVec(arr);
}