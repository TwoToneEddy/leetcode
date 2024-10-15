/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

https://leetcode.com/problems/reverse-integer/description/

*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>

int reverse(int x){

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
