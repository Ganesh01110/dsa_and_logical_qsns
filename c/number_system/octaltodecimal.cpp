// Problem Statement: Given an Octal Number, convert it into a Decimal Number.

// Example 1:
// Input: 345
// Output: 229
// Explanation: Decimal equivalent of given Octal expressionis 229

// Approach: 

// In Octal to Decimal Conversion, We will take every digit of the number and multiply it with 8 raised to power i  which will increase by 1 when we move to the next digit and then add it to sum. This task is repeated until n becomes 0. 

// For Eg, 345

// Step 1: Take digit 5, multiply 8 raised to power 0 with it so we get 5 here and now n becomes 34

// Step 2: Take digit 4, multiply 8 raised to power 1 with it so we get 32 and add it to the sum which now becomes 37. Also, n becomes 3.

// Step 3: Take digit 3 and multiply 8 raised to power 2 with it so we get 192 and add it to sum which now becomes 229. Now n becomes zero.


