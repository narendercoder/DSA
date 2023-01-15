#include<iostream>
#include<vector>
using namespace std;

//  *method 1  function
// int fib(int n, vector<int> &dp){
//     if(n <= 1){
//         return n;
//     }
//     if(dp[n] != -1){
//         return dp[n];
//     }
    
//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }



int main(){

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;


    //  *method 1 - TOP-DOWN/(recursion + memorization)(o(N), o(N)+o(N))
    // vector<int> dp(n+1);
    // for(int i=0; i<=n; i++){
    //     dp[i] = -1;
    // }
    // cout << fib(n, dp) << endl;


   //  *method 2 Bottom-up/tabulation(o(N), o(N))
//    vector<int> dp(n+1);
//     dp[1] = 1;
//     dp[0] = 0;
//     for(int i=2; i<=n; i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout<<dp[n] << endl;


    //  *method 3 space optimization(o(N), o(1))
    int prev1 = 1;
    int prev2 = 0;

    if(n == 0)
    return  prev2;

    for(int i=2; i<=n; i++){
        int curr = prev1 + prev2;
        //shift logic
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1<< endl;

 return 0;
}