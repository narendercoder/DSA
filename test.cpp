#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &vect){
    int ans = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            if(vect[i][j+1]==1 || vect[i-1][j]==1 || vect[i+1][j]==1 || vect[i][j-1]==1){
                ans++;
            }
            else ans = 0; 
        }    
    }
    return ans;
}

int main(){
    vector<vector<int>> vect{
        {0, 1, 0, 0, 1},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 0},
        {0, 0, 1, 1, 1},
    };
    
    int ans = solve(vect);
      
    cout<<ans<<endl;
    return 0;
}