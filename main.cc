#include <iostream>

#include "fib.h"

int main() {
    int n;
    std::cout << "Please enter n: ";
    std::cin >> n;

    std::cout << "Fib(n) is " << fib_recursive(n) << std::endl;
    return EXIT_SUCCESS;
}