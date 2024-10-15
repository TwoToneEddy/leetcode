/*
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
https://leetcode.com/problems/palindrome-number/description/
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>

bool isPalindrome(int x) {
    return(false);
    
}

int main () {

    if(isPalindrome(121))
        printf("121 true\n");
    else
        printf("121 false\n");


    if(isPalindrome(-121))
        printf("-121 true\n");
    else
        printf("-121 false\n");

    if(isPalindrome(10))
        printf("10 true\n");
    else
        printf("10 false\n");


    return(0);
}
