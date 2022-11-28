#include <time.h>
#include "mylib/mylib.h"
#include <stdio.h>
     
clock_t start, end;
double TimeUsed;
const int N = 40;

int main(){
    start = clock();

    for(int i=1; i<=N; i++){
    fibonacciIterative(i);
    }

    end = clock();
    TimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Runtime of Iterative Fibonnaci N %d : %lfs\n", N, TimeUsed);



    start = clock();

    for(int i=1; i<N; i++){
        fibonacciRecursive(i);

    }
    end = clock();
    TimeUsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Runtime of Recursive Fibonnaci N %d : %lfs\n", N, TimeUsed);

    return 0;
}