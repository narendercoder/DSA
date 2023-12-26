#include <bits/stdc++.h>

using namespace std;


using namespace std;

//using linklist
class Node{
    public:
    int data;
    Node* prev;
    Node(int n){
        data = n;
        prev = NULL;
    }
};
void Multiply(Node* tail, int n){
 Node*temp = tail,
 *prevNode = tail; //temp variable for keeping tail
 int carry = 0;
 while(temp!= NULL){
    int data = temp->data*n + carry;
    temp->data = data%10; //store last digit
    carry = data /10;
    prevNode = temp; 
    temp = temp->prev; //Moving temp by 1 prevNode will now denote temp
 }
 while (carry !=0){
    prevNode-> prev = new Node((int)(carry % 10));
     carry /= 10;
     prevNode = prevNode->prev;
 }

}
void print(Node* tail){
    if(tail == NULL){
     return;
    }
    print(tail->prev);
    cout<<tail->data;
}

int main(){
    int n = 20;
    int i;
    Node tail(1); //create node and initialize it by 1
    for(int i = 2; i<=n; i++){
       Multiply(&tail, i);
    }
    print(&tail);
    cout<<endl;
    return 0;
}


//using array
#include <bits/stdc++.h>
void multiply(vector<int> &arr, int &size, int &multiplier){
    int carry = 0;
    for(int i = 0; i<size; i++){
        int res = multiplier * arr[i];
        res = res+ carry;
        arr[i] = res%10;
        carry = res/10;
    }
    while(carry > 0){
        arr[size] = carry % 10;
        size++;
        carry = carry/10;
    }
} 
string calculateFactorial(int n)
{
    vector<int> arr(10000, 0);
    arr[0] = 1;
    int size = 1;
    
    for(int i = 2; i<=n; i++){
        multiply(arr, size, i);
    }

    string ans = "";
    for(int i = size-1; i>=0; i--){
       ans += to_string(arr[i]);
    }
    return ans;
}