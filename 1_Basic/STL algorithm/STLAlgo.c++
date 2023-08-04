// *Non-Manipulating Algorithms
// Some of the STL built-in algorithms are as follows: 

// 1. sort – To sort a given vector.
// 2. reverse – To reverse a vector.
// 3. *max_element – To find the maximum element from a vector.
// 4. *min_element – To find the minimum element from a vector.
// 5. accumulate – Does the summation of vector elements.
// 6. count – It counts the occurrences of an element ‘ele’ from the vector.
// 7. find – it returns an iterator to the first occurrence of an element ‘ele’ in vector and points to the last address of vector if the element is not present in the vector.
// 8. Binary_search – This function tests whether an element ‘ele’ exists in sorted vector order or not.
// 9. Lower_bound – returns an iterator pointing to the first element in the range [first, last], which has a value not less than ‘ele’.
// 10. upper_bound – it returns an iterator pointing to the first element in the range [first, last], which has a value greater than ‘ele’.

// *Manipulating Algorithms
// 1. arr.erase(position to be deleted) – It removes a selected element from a vector and resizes and shifts the vector elements
// 2. arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This deletes duplicate occurrences on a single line in a sorted vector.
// 3. next_permutation(first_iterator, last_iterator) – It changes a vector to its next permutation.
// 4. prev_permutation(first_iterator, last_iterator) – It changes a vector to its previous permutation. 
// 5. distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 