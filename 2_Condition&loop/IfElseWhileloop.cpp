#include <iostream>
using namespace std;

// conditionals and loops

int main(){

//* if Statement
  // Use the if statement to specify a block of C++ code to be executed if a condition is true.
  // Use the else statement to specify a block of code to be executed if the condition is false.

// syntax
/* 
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
} 
*/


  // char ch;
  // cin >> ch;

  // if (ch >= 'a' && ch <= 'z'){
  //   cout << "This is lowercase" << endl;
  // }
  // if (ch >= 'A' && ch <= 'Z'){
  //   cout << "This is uppercase" << endl;
  // }
  // else if (ch >= '0' && ch <= '9'){
  //   cout << "This is numeric" << endl;
  // }



  // Short Hand If...Else (Ternary Operator)
  //  variable = (condition) ? expressionTrue : expressionFalse;



//* While Loop
  // The while loop loops through a block of code as long as a specified condition is true:

  // int i = 0;
  // while (i < 5){
  //   cout << i << "\n";
  //   i++;
  // }

//sum of even number between 1 to n
  int n;
  cin>>n;
  int i = 1;
  int sum = 0;
  while(i!=n){
      if(i%2==0){
        sum = sum + i;
      }
      i=i+1;
  }
  cout<<sum<<endl;


  return 0;
}