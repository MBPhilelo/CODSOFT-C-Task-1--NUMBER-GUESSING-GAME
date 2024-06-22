#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame() {
    // Initialize random seed
    std::srand(std::time(nullptr));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have generated a random number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < randomNumber) {
            std::cout << "Your guess is too low. Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Your guess is too high. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break;
        }
    }
}

int main() {
    playGame();
    return 0;
}

