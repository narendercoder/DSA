// *Problem Statement
// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
//  Each time you can either climb one step or two steps. 
//  You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.

#include<iostream>
#include<vector>
using namespace std;

int solve(long long n, int i){

    if(i==n){
        return 1;
    }
    if(i > n){
        return 0;
    }

    return(solve(n, i+1)+ solve(n, i+2));
}
int countWays(int n){
    int dp[n + 1];
    
}

int main(){

  int n;
  cin>>n;
  cout << "Number of ways = " << countWays(n);
  return 0;
}