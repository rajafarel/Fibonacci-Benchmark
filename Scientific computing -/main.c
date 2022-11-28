#include <stdio.h>
#include "mylib/mylib.h"

int main(void){

    int N = 3;

    printf("F(%d) = %d\n",N,fibonacciIterative(N));
    printf("F(%d) = %d\n",N,fibonacciRecursive(N));
    return 0;
}