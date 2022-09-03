#include<iostream>
using namespace std;

/* A A A
   B B B
   C C C
*/
int pattern9(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}

/* A B C
   A B C
   A B C
*/
int pattern10(int n){
      int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* A B C
   D E F
   G H I
*/
int pattern11(int n){
      int i=1;
    char start = 'A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<start;
            start = start +1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* A B C
   B C D
   C D E
*/
int pattern12(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+ i + j -2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/*  A
    B B
    C C C 
*/
int pattern13(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+ i -1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* A 
   B C
   C D E
   D E F G
*/
int pattern14(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+ i + j -2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}
/* D 
   C D
   B C D
   A B C D
*/
int pattern15(int n){
    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+ n-i;
        while(j<=i){
            cout<<ch;
            ch = ch +1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
    printf("\n");
}


int main()
{
    int n;
    cin>>n;
//  pattern9(n);
//  pattern10(n);
//  pattern11(n);
// pattern12(n);
// pattern13(n);
// pattern14(n);
   pattern15(n);
}