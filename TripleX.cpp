#include <iostream>

int main()
{
    // Expression statements
    std::cout << "You are a secret agent breaking into the server room...";
    std::cout << std::endl;
    std::cout << "Enter the code..." << std::endl;

    // Declaration statements
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Expression statements
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    // Return statement
    return 0;
}