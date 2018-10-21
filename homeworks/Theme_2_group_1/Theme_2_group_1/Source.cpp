#include <iostream>
#include <string>

using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

void main() {
	cout << "Exercise 1" << endl;
	ex1();
	cout << endl;

	cout << "Exercise 2" << endl;
	ex2();
	cout << endl;

	cout << "Exercise 3" << endl;
	ex3();
	cout << endl;

	cout << "Exercise 4" << endl;
	ex4();
	cout << endl;

	cout << "Exercise 5" << endl;
	ex5();
	cout << endl;

	system("pause");
}

void ex1() {
	cout << "Please, enter an integer: ";
	int number;
	cin >> number;

	int currentBiggestNumber = INT16_MIN;

	cout << "Biggest digit in the number you entered is " << currentBiggestNumber << endl;
}

int getOccurrence(int numbers[], char length);
void ex2() {
	int numbersSequence[] = { 10, 20, 10, 30, 10, 10, 20 };
	char sequenceLength = sizeof(numbersSequence) / sizeof(numbersSequence[0]);

	cout << getOccurrence(numbersSequence, sequenceLength) << endl;
}

int getOccurrence(int numbers[], char length) {
	char res = 0;

	for (char i = 0; i < length; i++) {
		res ^= numbers[i];
	}

	return res;
}

int getMissingNumber(int sequence[], int sequenceLength) {
	int total = (sequenceLength + 1)*(sequenceLength + 2) / 2;

	for (int i = 0; i < sequenceLength; i++) {
		total -= sequence[i];
	}

	return total;
}

void ex3() {
	const char sequenceLength = 5;

	int numbersSequence[sequenceLength] = { 1, 2, 4, 5, 6 };
	int missingNumber = getMissingNumber(numbersSequence, sequenceLength);

	cout << "The missing number in the sequence is " << missingNumber << endl;
}

int calculateSum(int a, int b);
void ex4() {
	cout << "Enter an integer: ";
	int firstNumber;
	cin >> firstNumber;

	cout << "Enter an integer: ";
	int secondNumber;
	cin >> secondNumber;

	cout << "The sum calculated with bitwise operators is " << calculateSum(firstNumber, secondNumber) << endl;
}

int calculateSum(int a, int b) {
	if (b == 0) {
		return a;
	}

	int sum = a ^ b;
	int reminder = (a & b) << 1;

	return calculateSum(sum, reminder);
}

int swapBitsInGivenInterval(int number, int fromPosition, int toPosition, int numberLength);
void ex5() {
	int numberToOperateOver, start, end;

	cout << "Enter an integer: ";
	cin >> numberToOperateOver;

	cout << "Enter index for start: ";
	cin >> start;

	cout << "Enter index for end: ";
	cin >> end;

	char bitsToSwap = end - start;

	int numberWithSwappedBits = swapBitsInGivenInterval(numberToOperateOver, start, end, bitsToSwap);
	cout << numberWithSwappedBits << endl;
}

int swapBitsInGivenInterval(int number, int fromPosition, int toPosition, int numberLength)
{
	int _xor = ((number >> fromPosition) ^ (number >> toPosition)) & ((1U << numberLength) - 1);

	return number ^ ((_xor << fromPosition) | (_xor << toPosition));
}
