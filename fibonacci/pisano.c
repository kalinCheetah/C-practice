/*
 * Show Pisanos periods by 2...10 modules
 * 93 is a maximum number of fibonacci that can be stored in unsigned long long (64 bit) type.
*/

#include <stdio.h>
#include <time.h>

void fib(unsigned n);
void show_fib_num_by_modules(unsigned long long fib);

int main() {
    unsigned n;
    printf("Enter number fibonachchi: ");
    scanf("%d", &n);

    fib(n);    
}


void fib(unsigned n) {
    unsigned long long first = 0ull, second = 1ull, tmp;
    if (n == 0) { return; }
    printf("Pisanos period by any modules-devision:\n");
    printf("%2\t%3\t%4\t%5\t%6\t%7\t%8\t%9\t%10\n");
    show_fib_num_by_modules(first);
    for (int i = 2; i <= n; ++i) {
        tmp = second;
        show_fib_num_by_modules(second);
        second += first;
        first = tmp;
    }
}

void show_fib_num_by_modules(unsigned long long fib) {
    for (size_t i = 2; i <= 10; ++i) {
        printf("%d\t", fib % i);
    }
    printf("\n");
}

