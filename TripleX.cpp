#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into the server room...";
    std::cout << std::endl;
    std::cout << "Enter the code..." << std::endl;

    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    std::cout << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "Your guess: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << std::endl;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lost!" << std::endl;
    }

    return 0;
}