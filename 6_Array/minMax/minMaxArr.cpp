#include <bits/stdc++.h>
using namespace std;
#define ll long long

// pair<long long, long long> getMinMax(long long a[], int n) {
// sort(a,a+n);
// long long min=a[0];
// long long max=a[n-1];
// return make_pair(min,max);
   
// }
pair<long long, long long> getMinMax(long long a[], int n) {

long long min=a[0],max=a[0];
if(n==1){
   min= a[0];
   max = a[0];
}
else{
    for(int i=1;i<n;i++){
        if(a[i] > max){
            max = a[i];
        }
        else if(a[i]< min){
            min = a[i];
        }
    }
}
   return make_pair(min,max);
}

int main() {
	int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)  
    {  
        cin >> a[i];  
    }  
   	 pair<ll, ll> pp = getMinMax(a, n);
     cout<<pp.first<<" "<<pp.second<<endl;
     return 0;
}