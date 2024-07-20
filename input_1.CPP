#include <iostream>
#include <string>

int main() {
    std::string first_name, last_name;

    std::cout << "\nEnter first name: ";
    std::getline(std::cin, first_name);

    std::cout << "\nEnter last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Hey! " << first_name << " " << last_name << std::endl;

    return 0;
}

/*
Explanation of Improvements:

Consistent Header Inclusion: #include <iostream> is used instead of #include "iostream".

Consistent Input/Output: Using std::cout and std::getline instead of mixing with printf.

Code Readability: Proper indentation and spacing make the code more readable.

Namespace Handling: Explicitly using std:: to avoid potential issues in larger projects.

Error Handling: Basic program, so no explicit error handling is added, but for more complex scenarios, adding checks for input validity is recommended.

This version adheres to C++ best practices and ensures better readability and maintainability.
*/