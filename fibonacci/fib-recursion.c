/*
 * Recursive algorithm. Very-very slow algorithm. Many repeats calculations in each recursive call.
 *
 * 
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

    printf("fibonachchi number = %llu\n", fib_number);
    printf("%f", (double)(end_time - start_time) / CLOCKS_PER_SEC);
}

unsigned long long fib(unsigned n) {
    if (n == 0) return 0ull;
    if (n <= 2) return 1ull;
    return fib(n - 1) + fib(n - 2);
}
