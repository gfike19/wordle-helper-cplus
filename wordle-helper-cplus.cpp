// wordle-helper-cplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <iterator>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
using namespace std;

string GetStartWord() {
    ifstream file("words-left.txt");
    vector<string> wordsLeft;
    // String to store each line of the file.
    string line;
    int counter = 0;
    if (file.is_open()) {
        // Read each line from the file and store it in the
        // 'line' variable.
        while (getline(file, line)) {
            /*counter++;*/
            /*cout << line << endl;*/
            wordsLeft.push_back(line);
        }

        // Close the file stream once all lines have been
        // read.
        file.close();
    }
    else {
        // Print an error message to the standard error
        // stream if the file cannot be opened.
        cerr << "Unable to open file!" << endl;
    }
    srand(time(0));
    int rNum = rand();
    return wordsLeft[rNum];
}

void MainMenu() {
	while (true) {
	int menuChoice = 0;
	printf("Welcome to Wordle Helper!\n 1) Get a starter word\n2) Get possible guesses\n3) Remove word from list of possibles\n4) Exit program\n");
	std::cin >> menuChoice;

	if (menuChoice == 4) {
		break;
	}
    else if (menuChoice == 1) {
        string word = GetStartWord();
        printf("Random word is: %s", word);
    }
	}
}

int main()
{
    MainMenu();
}
