#include <iostream>

int main()
{
    int age = 27;

    std::cout << "I am " << age << " years old!\n";
    age++;
    std::cout << "Next year I'll be " << age << " years old!\n";
    std::cin >> age;
    std::cout << "Wow, you're " << age << " years old?\n";

    // A)
    int numberA = 5;

    numberA = 9;
    numberA = 11;
    numberA = 14;

    std::cout << "A) " << numberA << std::endl;
}