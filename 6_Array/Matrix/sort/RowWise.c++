#include<iostream>
#include<vector>
using namespace std;

void sortByRow(vector<vector<int>> &arr){
   for (int i = 0; i< arr.size(); ++i) {
        for(int j = 0; j<arr[i].size(); j++){
            cout << arr[i][j] << "  ";
        }
    }
}

int main(){

    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    sortByRow(arr);
    //  print array elements
    for (int i = 0; i< arr.size(); ++i) {
        for(int j = 0; j<arr[i].size(); j++){
            cout << arr[i][j] << "  ";
        }
    }

    return 0;

}