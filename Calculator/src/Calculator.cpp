//============================================================================
// Name        : Calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int, int);

int subtract(int, int);

int multiply(int, int);

int divide(int, int);
int main() {
	cout << "This is a calculator." << endl; // prints !!!Hello World!!!
	int Num1 = 0;
	int Num2 = 0;
	char Operator = 0;
	cout << "What is your first number?" << endl;
	cin >> Num1;
	cout << "Now, what is your second number?" << endl;
	cin >> Num2;
	cout << "Now you need an operator. Choose between adding(+), subtracting(-), multiplying(*), and dividing your numbers(/)." << endl;
	cin >> Operator;
	if (Operator == '+'){
		cout << add(Num1, Num2) << endl;
	}
	else if (Operator == '-'){
		cout << subtract(Num1, Num2);
	}
	else if (Operator == '*'){
		cout << multiply(Num1, Num2);
	}
	else if (Operator == '/'){
		cout << divide(Num1, Num2);

	}
	else{
		cout << "Sorry, this calculator is not currently able to use this operator."<< endl;
	}

	return 0;
}

int add(int a, int b){
	return a + b;
}
int subtract(int c, int d){
	return c - d;
}
int multiply(int e, int f){
	return e*f;
}
int divide(int g, int h){
	return g/h;
}
