#include<iostream>
using namespace std;

/* *  
   * *
   * * *
   * * * *
   * * * * *
*/
int pattern1(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/*       *  
       * *
     * * *
   * * * *
*/
int pattern2(int n){
      int row=1;
    while(row<=n){
        //space print
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print star
        int col =1;
        while(col<=row)
        {
            cout<<"*";
            col = col + 1;             
        }
        cout<<endl;
        row = row+1;
    }
    printf("\n");
}
/*  * * * * 
    * * *
    * *
    * 
*/
int pattern3(int n){
      int row=1;
    while(row<=n){
        //print star
        int col =1;
        while(col<=n-row+1)
        {
            cout<<"*";
            col = col + 1;             
        }
        cout<<endl;
        row = row+1;
    }
    printf("\n");
}
/*  * * * * 
      * * *
        * *
          * 
*/
int pattern4(int n){
      int row=1;
    while(row<=n){
          //space print
        int space=row-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print star
        int col =1;
        while(col<=n-row+1)
        {
            cout<<"*";
            col = col + 1;             
        }
        cout<<endl;
        row = row+1;
    }
    printf("\n");
}

int main()
{
    int n;
    cin>>n;

// pattern1(n);
// pattern(n);
// pattern(n);
  pattern4(n);
 

}