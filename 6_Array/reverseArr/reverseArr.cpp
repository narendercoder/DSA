#include <bits/stdc++.h>
using namespace std;

void reverse(int* arr, int n){
   int left =0;
   int right = n-1;
   while(left<=right){
    //    int temp = arr[left];
    //    arr[left] = arr[right];
    //    arr[right] = temp;
       swap(arr[left], arr[right]);
       left++;
       right--;
   }
}
void display(int* arr, int n){
     for (int i = 0; i < n; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    cout<<endl;
}
int main() {
	int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)  
    {  
        cin >> arr[i];  
    }  
   	 reverse(arr,n);
     display(arr,n);
}