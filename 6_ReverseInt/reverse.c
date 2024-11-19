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
#include <math.h>

int reverse(int x){

    long long remainder, reversed=0;
    long long a = pow(2,31);
    while(x != 0){
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    if(reversed > pow(2,31) || reversed < pow(-2,31) - 1)
        return(0);
    else
        return(reversed);

}

int main () {

    printf("%d\n",reverse(123));
    printf("%d\n",reverse(9646324351));


    return(0);
}
