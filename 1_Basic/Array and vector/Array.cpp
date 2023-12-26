#include<iostream>
#include<array>
using namespace std;

int main(){
    

// declare and initialize an array
int basic[3] = {1,2,3};
int x[] = {19, 10, 8, 17, 9, 15};

//syntax:   array<object_type, arr_size> arr_name;
array<int, 4> arr = {1,2,3,4};
array<int , 4> arr1={'M','M','P','N'};

// a) [ ] Operator : This is similar to the normal array, we use it to access the element store at index ‘i’ .
cout<<arr[0] <<" "<<arr[2];

// b) front( ) and back( ) function: These methods are used to access the first and the last element of the array directly.
cout<<arr.front() <<" "<<arr.back();

// c) swap( ) function: This swap function is used to swap the content of the two arrays.
 arr.swap(arr1);

// d) empty( ) function: This function is used to check whether the declared STL array is empty or not, if it is empty then it returns true else false.

// e) at( ) function: This function is used to access the element stored at a specific location, if we try to access the element which is out of bounds of the array size then it throws an exception.

// f) fill( ) function: This is specially used to initialize or fill all the indexes of the array with a similar value. 

// g) size( ) or max_size( ) and sizeof( ) function: Both size( ) or max_size( ) are used to get the maximum number of indexes in the array while sizeof( ) is used to get the total size of array in bytes.

// h) data( ): This function returns the pointer to the first element of the array object. Because elements in the array are stored in contiguous memory locations. This data( ) function return us the base address of the string/char type object.

// I) cbegin( ) and cend( )


//Take Inputs from User and Store Them in an Array

 int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";
  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  //Vector
  vector<int> vect1{ 10, 20, 30 };

//* 2D Array
int test[2][3] = {2, 4, 5, 9, 0, 19};
int test[2][3] = {{2, 4, 5}, {9, 0, 19}};

//* Multidimension
int test[2][3][4] = { 
                     { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                     { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
                 };


}