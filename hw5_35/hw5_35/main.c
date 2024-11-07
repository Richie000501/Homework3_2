#include <stdio.h>
#include <limits.h>

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, ans;
    if (n == 0) return 0;
    if (n == 1) return 1;
    while (--n) {
        // notice that we cannot write "if(ULLONG_MAX < a + b)" due to overflow issue
        if (ULLONG_MAX - a < b) {
            return ULLONG_MAX;
        }
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}

// int main(){
//     unsigned int n;
//     scanf("%u", &n);
//     printf("%llu", fibonacci(n));
//     return 0;
// }

int main() {
    unsigned int n = 0, max_n;
    unsigned long long int val, max_val;
    // scanf("%u", &n);
    while (1) {
        val = fibonacci(n);
        if (val == ULLONG_MAX) break;
        printf("n = %u, val = %llu\n", n, val);
        max_val = val;
        max_n = n;
        n++;
    }
    printf("maximum value of unsigned long long int = %llu\n", ULLONG_MAX);
    printf("max_n = %u, max_val = %llu", max_n, max_val);
    return 0;
}

