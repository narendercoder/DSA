#include <bits/stdc++.h>
using namespace std;

//Linear search
bool Linearsearch(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
   
    for (int row =0; row<n; row++)
    {
        for (int col =0; col<m; col++)
    {
         if(matrix[row][col] == target){
            return 1;
         }
    }
    }
    return 0;
}

//Binary Search
// row are sorted from left to right.
bool searchMatrix2(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

// each row are sorted in ascending from left to right.
// each column are sorted in ascending from top to bottom.
bool searchMatrix1(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = col - 1;
    while (start < row && end >= 0)
    {
        int element = matrix[start][end];
        if (element == target)
            return 1;
        else if (element < target)
            start++;

        else
            end--;
    }
    return 0;
}



void PrintVec(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    int temp;
    vector<vector<int>> matrix;
    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    // cout << "Print: " << endl;
    // PrintVec(arr);

     int x = Linearsearch(matrix, 3);  
    // int x = searchMatrix2(matrix, 3);
    cout << (x == 1 ? "yes" : "no") << endl;
}