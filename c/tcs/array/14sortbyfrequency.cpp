// Given an array of integers, having some duplicate elements, sort the array by frequency.

// Example 1:
// Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
// Output: 2 2 2 1 1 3 3 4 
// Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.

// Approach: Brute Force

// Step 1: Sort the given array.

// Step 2: Now create a 2d array having the first row for storing distinct elements and a second row for maintaining their frequency.

// Step 3: Now sort the elements according to their frequency and if two elements are of the same frequency remain them in the sorted order.
