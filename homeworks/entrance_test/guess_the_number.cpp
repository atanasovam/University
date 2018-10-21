#include <iostream>;
#include <stdlib.h>;
using namespace std;

void guess() {
	int numberOfAttempts = 0;
	double n;
	double m;

	cout << "Enter minimum possible number: ";
	cin >> m;

	cout << "Enter maximum possible number: ";
	cin >> n;

	double randomNumber = n + (rand() / (RAND_MAX / (m - n)));
	randomNumber = floor(randomNumber * 100) / 100;
	double userGuess;

	while (true) {

		cout << "Guess the number: ";
		cin >> userGuess;

		numberOfAttempts++;

		if (userGuess == randomNumber) {
			cout << "Congrats! You guess the random number after " << numberOfAttempts << " number of attempts." << endl;

			system("Pause");
			break;
		}
		else {
			if (userGuess > randomNumber) cout << "Your number is greater than the random one." << endl;
			else if (userGuess < randomNumber) cout << "Your number is less than the random one." << endl;
		}
	}

	system("Pause");
}
