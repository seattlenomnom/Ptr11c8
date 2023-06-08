/* ptr11c8.c the source file for Ptr11c8 project
 *
 *
*/

#include <stdio.h>

void test(int *int_pointer);

int main(void){

    int i = 50, *p = &i;

    printf("Before the call to test i = %i\n", i);

    test(p);

    printf("After the call to test, i = %i\n", i);

    return(0);
}

void test(int *int_pointer){
    *int_pointer = 100;
}
