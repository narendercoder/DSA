//* C++ Bitwise Operators
  //In C++, bitwise operators perform operations on integer data at the individual bit-level. These operations include testing, setting, or shifting the actual bits. For example,

//* Operator	Description
// &	Bitwise AND Operator
// |	Bitwise OR Operator
// ^	Bitwise XOR Operator
// ~	Bitwise Complement(NoT) Operator
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
// !Note
    // The result of ~ operator on a small number can be a big number if result is stored in an unsigned variable. 
    // And the result may be a negative number if the result is stored in a signed variable (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit) 
    // E.g For print the result 11111010
    // The highest bit in an int variable is the so-called sign bit, if the highest bit is 1, the number is interpreted as negative(-)
    // 2nd complement of rest (1111010) = (0000110) = 6. ~a = -6
    cout << "~a = " << (~a) << endl;
 
    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
 
    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
    return 0;
}