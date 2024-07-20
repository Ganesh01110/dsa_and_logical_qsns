// Problem Statement: Given an Octal Number, convert it into Binary Number.

// Example 1:
// Input: 345
// Output: 011100101
// Explanation: Binary equivalent of given Octal expressionis 011100101

// Approach: 

// For Octal to Binary Conversion, we will first convert Octal Number System to Decimal Number System and then convert Decimal Number System to Binary Number System.

// For Octal to Decimal Conversion

// We will take every digit of the number and multiply it with 8 raised to power i which will increase by 1 when we move to the next digit and then add it to sum. This task is repeated until n becomes 0.

// For Decimal to Binary Conversion

// For Decimal to Binary Conversion, we will divide the given number by 2 ( Since the Binary Numbers System has 2 digits in use ) repeatedly, and its remains will be stored till the number becomes zero.