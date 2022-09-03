#include <bits/stdc++.h>
using namespace std;

 void segregateElements(vector<int> arr,int n){
        if(n==0 || n==1){
            return;
        }
        int a[n];
        int i=0;
        for(int x=0;x<n;x++){
            if(arr[x]>=0){
                a[i]=arr[x];
                i++;
            }
        }
        for(int x=0;x<n;x++){
            if(arr[x]<0){
                a[i]=arr[x];
                i++;
            }
        }
        for(int x=0;x<n;x++){
            arr[x]=a[x];
        }

}

void display(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n,k,x;
    cin >> n;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {   
        cin >> x;
        cin >> arr[x];
    }
    display(arr, n);
    
}