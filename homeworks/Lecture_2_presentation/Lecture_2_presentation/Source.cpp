#include <iostream>

using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();

int main() {
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

	system("pause");

	return 0;
}

void ex1() {

	cout << "Please, enter a number of type integer: ";
	int integer;
	cin >> integer;

	cout << "Please, enter a number of type float: ";
	float floatValue;
	cin >> floatValue;

	cout << "Please, enter a number of type double: ";
	double doubleValue;
	cin >> doubleValue;

	cout << "Please, enter a number of type character: ";
	char charValue;
	cin >> charValue;
}

void ex2() {
	float firstValue, secondValue;

	cout << "Please enter the first number: ";
	cin >> firstValue;

	cout << "Please enter the second number: ";
	cin >> secondValue;

	float sum = firstValue + secondValue;

	float firstValueDistinction = firstValue - secondValue;
	float firstValueDivision = firstValue / secondValue;
	float firstValueMultiplication = firstValue * secondValue;
	float firstValueModule = fmod(firstValue, secondValue);

	float secondValueDistinction = secondValue - firstValue;
	float secondValueDivision = secondValue / firstValue;
	float secondValueMultiplication = secondValue * firstValue;
	float secondValueModule = fmod(secondValue, firstValue);

	cout << "First plus second number equals " << sum << endl;

	cout << "First minus second number equals " << firstValueDistinction << endl;
	cout << "Second minus first number equals " << secondValueDistinction << endl;

	cout << "First divided by second number equals " << firstValueDivision << endl;
	cout << "Second divided by first number equals " << secondValueDivision << endl;

	cout << "First multiplied by second number equals " << firstValueMultiplication << endl;
	cout << "Second multiplied by first number equals " << secondValueMultiplication << endl;

	cout << "First module second number equals " << firstValueModule << endl;
	cout << "Second multiplied by first number equals " << secondValueModule << endl;
}

void ex3() {
	double a = 35, b = 2.7, c = 1.2, d = 99;

	a += 2.8;
	cout << a << endl;

	b -= 2;
	cout << b << endl;

	c /= 1.2;
	cout << c << endl;

	d *= 30;
	cout << d << endl;
}

void ex4() {
	int firstNumber, secondNumber;

	cout << "Please, enter a number: ";
	cin >> firstNumber;

	cout << "Please, enter a number: ";
	cin >> secondNumber;

	firstNumber = firstNumber ^ secondNumber;
	secondNumber = firstNumber ^ secondNumber;
	firstNumber = firstNumber ^ secondNumber;

	cout << "After swapping the values of " << firstNumber << " and " << secondNumber << endl;
	cout << "- the value of your first number is: " << firstNumber << endl;
	cout << "- the value of your second number is: " << secondNumber << endl;
}