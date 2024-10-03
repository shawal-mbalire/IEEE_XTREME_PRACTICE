#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

// Function to calculate GCD using Euclid's algorithm
int euclid(int A, int B) {
    printf("euclid\n");
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    return abs(A);
}

// Function to find common factors of A and B and return the last common factor (GCD)
int finding_common(int A, int B) {
    printf("finding_common\n");
    int gcd = 1;

    for (int i = 2; i <= A && i <= B; ++i) {
        if (A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

// Function to list all factors of A and B and return the last common factor (GCD)
int listing_all(int A, int B) {
    int fA[MAX_SIZE], fB[MAX_SIZE], fC[MAX_SIZE];
    int lenA = 0, lenB = 0, lenC = 0;

    // List factors of A
    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            fA[lenA++] = i;
        }
    }

    // List factors of B
    for (int i = 1; i <= B; ++i) {
        if (B % i == 0) {
            fB[lenB++] = i;
        }
    }

    // Find common factors
    for (int i = 0; i < lenA; ++i) {
        for (int j = 0; j < lenB; ++j) {
            if (fA[i] == fB[j]) {
                fC[lenC++] = fA[i];
            }
        }
    }

    // Return the last common factor (GCD)
    return fC[lenC - 1];
}

int main() {
    int A, B;
    printf("Enter two numbers: ");
    scanf("%d %d", &A, &B);

    printf("%d\n", listing_all(A, B));
    printf("%d\n", finding_common(A, B));
    printf("%d\n", euclid(A, B));

    return 0;
}