#include <iostream>
#include <fstream>
#include <string>


using namespace std;

//This function will generate a random number to figure out which line 
// the word that is chosen should be on
int genNumber() {
	int randNum = 0;
	randNum = (rand() % 100) + 1;
	return randNum;
};



string chooseWord() {
	string currentWord = "";
	string theWord = "";
	int number = genNumber();
	ifstream WordList("WordList.txt");
	int counter = 0;

	while (getline(WordList, currentWord)) {
		if (counter == number) {
			theWord = currentWord;
			break;
		};
	};
	WordList.close();
	return currentWord;

};


int main() {
	cout << "Hello! Welcome to my Wordle recreation!" << endl;
	string gameWord = chooseWord();
	cout << gameWord << endl;




	return 0;
};