#include<iostream>
using namespace std;

/* 1234 
   1234
   1234
   1234
*/
 
int pattern1(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* 4321 
   4321
   4321
   4321
*/
int pattern2(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
} 
/* 1 2 3 4 
   5 6 7 8
   9 10 11 12
   13 14 15 16
*/
int pattern3(int n){
      int i=1;
      int count =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count = count +1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* *  
   * *
   * * *
   * * * *
   * * * * *
*/
int pattern4(int n){
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
/* 1  
   2 2
   3 3 3
   4 4 4 4
*/
int pattern5(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* 1  
   2 3
   4 5 6
   7 8 9 10
*/
int pattern6(int n){
      int i=1;
      int count =1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count = count + 1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* 1  
   2 3
   3 4 5
   4 5 6 7
   5 6 7 8 9
*/
// int pattern7(int n){
//       int i=1;
//     while(i<=n){
    // int value =i;
//         int j=1;
//         while(j<=i){
//             cout<<value;
//             value = value +1;
//             j=j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }
// }
int pattern7(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i+j-1);
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* 1
   2 1
   3 2 1
   4 3 2 1
*/
int pattern8(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1);
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/*      1
      2 2
    3 3 3
  4 4 4 4
*/
int pattern9(int n){
      int row=1;
    while(row<=n){
           //space print
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
       int j=1;
        while(j<=row){
            cout<<row;
            j=j+1;
        }
        cout<<endl;
        row = row+1;
    }
    printf("\n");
}

/*      1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
*/
int pattern10(int n){
      int row=1;
    while(row<=n){
           //space print
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=row){
            cout<<j;
            j=j+1;
        }
        int k=1;
        while(k<=row-1){
            cout<<(row-k);
            k=k+1;
        }
        cout<<endl;
        row = row+1;
    }
    printf("\n");
}
/* 1 2 3 4 5 5 4 3 2 1
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1
   1 * * * * * * * * 1
*/
int pattern11(int n){
      int row=1;
    while(row<=n){
        int j=1;
        while(j<=n-row+1){
            cout<<j<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=row-1){
            cout<<"*"<<" "<<"*"<<" ";
            k=k+1;
        }
        int l = 1;
        while(l<=n-row+1){
            cout<<n-l+1<<" "; 
            l=l+1;
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
//   pattern1(n);
//   pattern2(n);
//   pattern3(n);
//   pattern4(n);
//   pattern5(n);
//   pattern6(n);
//   pattern7(n);
//  pattern8(n);
 pattern11(n);

}