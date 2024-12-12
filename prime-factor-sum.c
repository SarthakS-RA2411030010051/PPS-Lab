#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to find prime factors and compute the sum
int prime_factor_sum(int n) {
    int sum = 0, power = 1;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i) && n % i == 0) {
            sum += pow(i, power++);
            n /= i;
            i = 1;
        }
    }
    return sum;
}
