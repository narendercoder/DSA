// Rotate Matrix by 90 deg
#include <bits/stdc++.h>
using namespace std;

// rotate matrix by 90 deg anti-clockwise
void rotate1(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }
}

// rotate matrix by 90 deg clockwise
void rotate2(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
    }
}

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
    cout << "Before Rotate: " << endl;
    PrintVec(arr);
    Transpose(arr, N);
    cout << "After Rotate: " << endl;
    PrintVec(arr);
}