#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>


void reverse(char beg[]){

    // beg is a pointer due to "Array decay"
    char *end = beg + strlen(beg)-1;

    while(beg < end){

        char temp = *beg;
        *beg = *end;
        *end = temp;

        beg ++;
        end --;
    }


}


int main () {
    char init[] = "ABCDEF";
    printf("%s\n",init);
    reverse(init);
    printf("%s\n",init);

    return(0);
}
