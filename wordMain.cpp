#include <iostream>
#include <fstream>

using namespace std;

//This function will generate a random number to figure out which line 
// the word that is chosen should be on
int genNumber() {
	int randNum = 0
	randNum = (rand() % 100) + 1;
	return randNum
}



string chooseWord() {
	string potentialWords[] = {}
	string currentWord = ""
	int number = getNumber();
	ifstream WordList("WordList.txt");
	int counter = 0;

	while (getline(WordList, currentWord)) {
		if (counter == number) {
			return currentWord;
			break;
		}
	}

}


int main() {
	cout << "Hello! Welcome to my Wordle recreation!" << endl;
	string gameWord = chooseWord();
	cout << gameWord << endl;


	


}