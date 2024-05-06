/*
 * We no need to store all values in array, but only two values
 * It works uncomparable faster recursive alg.
*/

#include <stdio.h>
#include <time.h>

unsigned long long fib(unsigned n);

int main() {
    unsigned n;
    printf("Enter number fibonachchi: ");
    scanf("%d", &n);

    clock_t start_time = clock();
    unsigned long long fib_number = fib(n);
    clock_t end_time = clock();

    printf("Fibonachchi number = %llu\n", fib_number);
    printf("Elapsed time: %f", (double)(end_time - start_time) / CLOCKS_PER_SEC);
//    printf("Elapsed time: %u", end_time - start_time);
}


unsigned long long fib(unsigned n) {
    unsigned long long first = 0ull, second = 1ull, tmp;
    if (n == 0) { return 0ull; }
    for (int i = 2; i <= n; ++i) {
        tmp = second;
        second += first;
        first = tmp;
    }
    return second;
}
