// Problem Statement: Given a number, convert it into the form of words.

// Note:- Consider maximum no. of digits in the number as 4.

// Example 1:
// Input: 7824
// Output: seven thousand eight hundred twenty four
// Explanation: 7824 in words can be written as seven thousand eight hundred twenty four.

// Case 1:  When a single digit is present

// Case 2: When two digits are present

// Subcases for 2 digits will be

// -> having tens place as 1

// -> having tens place as any other number other than 1 and 0

// Case 3: When three digits are present

// Just add hundred to hundredth place number, the further process will remain same as 2 digit number

// Case 4: When 4 digits are present

// Just add thousand to thousand place and further process will remain same as 3 digit number.