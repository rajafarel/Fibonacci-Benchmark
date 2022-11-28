# Fibonacci

Now, i'm gonna compare the time and space complexity of Fibonacci(Iterative) and Fibonacci(Recursive)

## Fibonacci iterative

```c
int fibonacciIterative(int N){
    int F0 = 0;
    int F1 = 1;
    int F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }
}
```

## Fibonacci recursive

```c
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
```

# Testing

## How to run

Use the command make; ./main.out

```bash
make; ./main.out
```

## Result

![Result](resultpic/mainresult.jpeg)

# Benchmark

Benchmarking is to test the code and helps to improve our code by comparing each approach's time and space complexity.

# Time Complexity

## How to run

using command make time

```bash
make time
```

## Time Comparison

In this case i use N = 40
![TimeComplex](resultpic/timecomplexity.png)
it shows that the time taken for iterative N = 40 is 0.000003s and for recursive N = 40 is 1.402253s

# Space Complexity

## How to run

```bash
make space
./spacecomplexrecursive.out
```

```bash
make space
./spacecomplexiterative.out
```

## Space Comparison

(using task manager)

N = 10000
![SpaceComplex](resultpic/spacecomplexityiterative.png)
![SpaceComplex](resultpic/spacecomplexityrecursive.png)
The memory usage by iterative is 27,7mb and memory usage by recursive is 27,5mb


