//DP

//f(n) = E f(i-1)* f(n-i)
#include <bits/stdc++.h>
using namespace std;

// if(n<=1){
//             return 1;
//         }
//         int ans = 0;
//         for(int i=1; i<=n; i++){
//             ans += numTrees(i-1)* numTrees(n-i);
//         }
//         return ans;

//Top Down DP
int solve(int n, vector<int> &dp){
    if(n<=1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans += solve(i-1, dp)* solve(n-i, dp);
        }
        return dp[n] = ans;
}

//Bottom-up DP
int solveTab(int n){
    vector<int> dp(n+1, 0);
    dp[0] = dp[1] = 1;
    //i-> number of nodes
    for(int i = 2; i<=n; i++){
        //j-> root node
        for(int j = 1; j<=i; j++){
            dp[i] += dp[j-1]*dp[i-j];
        }
    }
   return dp[n];
}

//Catalan Number


class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);

        return solveTab(n);
    }
};