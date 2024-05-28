#include<iostream>

int main(){
    int a, b;
    std::cout << "Enter the value of a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the value of b: " << std::endl;
    std::cin >> b;
    // Addition
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    // Subtraction
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    // Multiplication
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    // Division
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    // Remainder
    std::cout << a << " % " << b << " = " << a % b << std::endl;

    return 0;
}