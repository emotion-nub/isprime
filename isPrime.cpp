#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // No factors found, it's a prime number
}

int main() {
    // Input: a number to check for primality
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is prime and display the result
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
