#include <bits/stdc++.h>
using namespace std;

void solve(vector<char> &s, int n, int i)
{

    if (n <= i)
    {
        return;
    }
    //  Swapping the character
    swap(s[i], s[n]);
    solve(s, n - 1, i + 1);
}
void reverseString(vector<char> &s)
{
    int n = s.size() - 1, i = 0;
    solve(s, n, 0);
}

int main()
{
    int n;
    char temp;
    cin >> n;
    vector<char> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }
    cout<<"Array before reverse";
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    reverseString(s);
    cout<<endl;
    cout<<"Array after reverse"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}