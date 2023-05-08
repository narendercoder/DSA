#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n==0)
    return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
bool isPowerOfTwo1(int n) {
    for(int i=0;i<=30;i++){
        int ans = pow(2,i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
bool isPowerOfTwo3(int n) {
    int ans = 1;
    for(int i=0;i<=30;i++){
        if(ans == n){
            return true;
        }
        if( ans < INT_MAX/2)
        ans = ans * 2;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int ans = isPowerOfTwo(n);
    ans == 0 ? cout << "false" << endl : 
    cout <<  "true" << endl;
    
    return 0;
}