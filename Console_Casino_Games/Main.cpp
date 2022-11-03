// Console_Casino_Games.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string menuChoice = "";

void mainMenuInput() {
    cin >> menuChoice;

    if (menuChoice == "1") {

    }
    else if (menuChoice == "2") {

    }
    else if (menuChoice == "3") {

    }
    else if (menuChoice == "e" || menuChoice == "E") {

    }
    else {
        cout << "Enter a valid input!\n";
        mainMenuInput();
    }
}

void mainMenuOptions() {
    cout << "Welcome to Vegas\n";
    cout << "1: Blackjack\n";
    cout << "2: Roulette\n";
    cout << "3: Slots\n";
    cout << "E: Exit\n";
    mainMenuInput();
}

int main()
{
    mainMenuOptions();
    return 0;
}