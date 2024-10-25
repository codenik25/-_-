//#project2:-Make a program to guess the number
#include <iostream>
#include <cstdlib>  //this header file is used for rand() and srand()
#include <ctime>    //for time()
using namespace std;

int main() {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0))); 

    int randomNumber = rand() % 100 + 1;  //Generate a random number between 1 and 100
    int playerGuess = 0;  //Variable store the player guess
    int attempts = 0;     //Track the attempt number
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;
//game loop for guessing
    do {
        cout << "Enter your guess: ";
        cin >> playerGuess;  
        attempts++;  //increase the attempt until the correct number

        
        if (playerGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts!" << endl;
        }//Provide feedback based on the guess
    } while (playerGuess != randomNumber);  //Continue until the correct guess
    return 0;
}
//Let check the output
