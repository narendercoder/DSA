#include <bits/stdc++.h>
using namespace std;

 void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n){
    vector<int> nums3;
    int i =0, j=0;
    int k = 0;
    while(i<n && j<m){
        if(nums1[i] < nums2[j]){
            nums3[k++] = nums1[i++];
        }
        else{
            nums3[k++] = nums2[j++];
        }
    }
    //copy first vector remaining element
    while(i<n){
        nums3[k++] = nums1[i++];
    }

    //copy second vector remaining element
    while(j<m){
        nums2[k++] = nums2[j++];
    }
 }
    void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1,j=n-1,k=(m+n-1);
        while(i>=0 && j>=0){
         if(nums1[i]>nums2[j]){
             nums1[k--] = nums1[i--];
         }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--] = nums1[i--];
        }
         while(j>=0){
            nums1[k--] = nums2[j--];
        }
        
    }


int main() {
	int x,m,n;
    vector<int> a;
    vector<int> b;
    cin>>m;
    cin>>n;
    
    for (int i = 0; i < n; i++)  
    {  
         cin>>x;
         a.push_back(x);  
    }  

    for (int i = 0; i < n; i++)  
    {  
         cin>>x;
         b.push_back(x);  
    }  
   	//  int ans = findKthLargest(a, k);
      merge1(a, m, b, n);
   
     return 0;
}