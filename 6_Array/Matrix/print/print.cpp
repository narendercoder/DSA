#include <bits/stdc++.h>
using namespace std;

void WavePrintVec(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int col = 0; col < n; col++)
    {
        if (col & 1)
        {
            // odd index - bottom to top
            for (int row = n - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // 0 or even index - top to bottom
            for (int row = 0; row < n; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}
void SpiralPrintVec(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row * col;
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;
    while (count < total)
    {
        // print starting row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // print ending col
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print ending row
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
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
    cout << "Print: " << endl;
    PrintVec(arr);
    // cout << "Wave Print: " << endl;
    // WavePrintVec(arr);
    cout << "Sprial Print: " << endl;
    SpiralPrintVec(arr);
}