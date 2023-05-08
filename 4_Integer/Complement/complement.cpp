#include <bits/stdc++.h>
using namespace std;
int bitwiseComplement(long long n)
{
    int m = n;
    int mask = 0;

    //edge case
    if (n == 0)
        return 1;
        
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = bitwiseComplement(n);
    cout << ans << endl;
    return 0;
}