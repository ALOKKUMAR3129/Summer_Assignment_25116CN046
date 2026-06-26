//Write a program to Create number guessing game.
#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main(){
    int i, guess, target;
    int flag = 0; 
    srand(time(0));

    target = (rand() % 100) + 1;
    cout << "Guess the secret number between 1 and 100\n";
    cout << "You have exactly 4 chances!\n\n";
    for(i=1; i<=4; i++){
        cout << "Chance " << i << " - Enter your guess: ";
        cin >> guess;
        if(guess > target){
            cout << "Too high!\n\n";
        }
        else if(guess < target){
            cout << "Too low!\n\n";
        }
        else{
            cout << "\nYou won! Correct guess.\n";
            flag = 1; 
            break;    
        }
    }
    if(flag == 0){
        cout << "Game Over! You ran out of chances.\n";
        cout << "The correct number was: " << target << "\n";
    }
    return 0;
}