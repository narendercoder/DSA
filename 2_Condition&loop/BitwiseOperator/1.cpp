//* C++ Bitwise Operators
  //In C++, bitwise operators perform operations on integer data at the individual bit-level. These operations include testing, setting, or shifting the actual bits. For example,

// Operator	Description
// &	Bitwise AND Operator
// |	Bitwise OR Operator
// ^	Bitwise XOR Operator
// ~	Bitwise Complement Operator
// <<	Bitwise Shift Left Operator
// >>	Bitwise Shift Right Operator

#include <iostream>
using namespace std;
  
int main() {
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
 
    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
 
    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;
 
    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;
 
    // The result is 11111010
    cout << "~a = " << (~a) << endl;
 
    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
    return 0;
}