#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "You are a secret agent breaking into the server room on level " << Difficulty << std::endl;
    std::cout << "Enter the code...\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "Your guess: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!\n";
        std::cout << "\n*** Congratulations! You've completed the level! ***\n\n" << std::endl;
        return true;
    }
    else
    {
        std::cout << "You lost!\n";
        std::cout << "\n*** Retry hacking the current level! ***\n\n" << std::endl;
        return false;
    }
}

int main()
{
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxDifficultyLevel = 5;

    while (LevelDifficulty <= MaxDifficultyLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // clears errors
        std::cin.ignore(); // discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "Congratulations! You've hacked all the levels!\n";
    return 0;
}