#include <bits/stdc++.h>
using namespace std;

 // *Find Kth Largest
int findKthLargest(vector<int>& nums, int k) {
        int ans,n=nums.size();

        //*approch:1 - O(N log(N))
        // sort(nums.begin(),nums.end()); 
        // return ans = nums[n-k];

        //*approch:2-Using Max Heap - O(N + Klog(N))
        // priority_queue <int> pq(nums.begin(), nums.end());
        // int ans = 0;
        // while(k--){
        //     ans = pq.top();
        //     pq.pop();
        // }
        // return ans;

        //*approch:3-Using Min Heap - O(Nlog(k))
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        ans=pq.top();
        return ans;
}

                             // *Find Kth Smallest
int findKthSmallest(vector<int>& nums, int k) {
        int ans,n=nums.size();

        // if (nums.size() < k) {
        //         exit(-1);
        //     }
        //*approch:1
        sort(nums.begin(),nums.end());
        return ans = nums[k-1];
        
        //*approch:2-Using Min Heap
        // priority_queue <int, vector<int>, greater<int> > pq(nums.begin(), nums.end());
        // ans = 0;
        // while(k--){
        //     ans = pq.top();
        //     pq.pop();
        // }
        // return ans;

        //*approch:3-Using Max Heap
        // priority_queue <int> pq;
        // for(int i=0;i<k;i++){
        //     pq.push(nums[i]);
        // }
        // for(int i=k;i<n;i++){
        //     if(nums[i]<pq.top()){
        //         pq.pop();
        //         pq.push(nums[i]);
        //     }
        // }
        // ans=pq.top();
        // return ans;
}
int main() {
	int x,k,n;
    vector<int> a;
    cin>>n;
    cin>>k;
    
    for (int i = 0; i < n; i++)  
    {  
         cin>>x;
         a.push_back(x);  
    }  
   	//  int ans = findKthLargest(a, k);
    int ans = findKthSmallest(a, k);
     cout<<ans<<endl;
     return 0;
}