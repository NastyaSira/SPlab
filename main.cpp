
#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Sum: " << calculator.add(a, b) << std::endl;
    std::cout << "Subtraction: " << calculator.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << calculator.multiply(a, b) << std::endl;

    // Handle division by zero
    if (b != 0) {
        std::cout << "Division: " << calculator.divide(a, b) << std::endl;
    } else {
        std::cout << "Cannot divide by zero." << std::endl;
    }

    return 0;
}
