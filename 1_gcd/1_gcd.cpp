#include <iostream>
#include <vector>
#include <algorithm>

// Function to list all factors of A and B and return the last common factor (GCD)
std::vector<int> listing_all(int A, int B) {
    std::vector<int> fA;
    std::vector<int> fB;
    std::vector<int> fC;

    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) fA.push_back(i);
    }

    for (int i = 1; i <= B; ++i) {
        if (B % i == 0) fB.push_back(i);
    }

    for (const auto& element : fA) {
        if (std::find(fB.begin(), fB.end(), element) != fB.end()) {
            fC.push_back(element);
        }
    }

    return fC;
}

// Function to find common factors of A and B and return the last common factor (GCD)
int finding_common(int A, int B) {
    std::cout << "finding_common" << std::endl;
    std::vector<int> fC;

    for (int i = 1; i <= A; ++i) {
        if (A % i == 0 && B % i == 0) {
            fC.push_back(i);
        }
    }

    return fC.back();
}

// Function to calculate GCD using Euclid's algorithm
int euclid(int A, int B) {
    std::cout << "euclid" << std::endl;
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    return abs(A);
}

int main() {
    int A, B;
    std::cin >> A >> B;

    // std::vector<int> result = listing_all(A, B);
    // std::cout << result.back() << std::endl;

    // std::cout << finding_common(A, B) << std::endl;

    std::cout << euclid(A, B) << std::endl;

    return 0;
}