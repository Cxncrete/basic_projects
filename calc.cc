#include <iostream>
#include <cmath>
#include <iostream>

using namespace std;

int main(){	

	int operation = 0;
	int firstNum = 0;
	int secondNum = 0;

	cout << "1) addition 2) subtraction 3) multiplication 4) division:\n";
	cin >> operation;
	
	if (!cin) {
		cout << "BAD INPUT!\n";
		exit(EXIT_FAILURE);
	}

	cout << "Please enter two numbers:\n";
	cin >> firstNum >>  secondNum; 
	
	if (!cin) {
		cout << "BAD INPUT!\n";
		exit(EXIT_FAILURE);
	}

	if (operation == 1){
		cout << firstNum + secondNum << endl;
	} else if (operation == 2){
		cout << firstNum - secondNum << endl;
	} else if (operation == 3){
		cout << firstNum * secondNum << endl;
	} else if (operation == 4){
		if(secondNum == 0){
			cout << "BAD INPUT!\n";
		} else {
			cout << firstNum/secondNum << endl;
		}
	} else if (operation == 5){
		if(secondNum == 0){
			cout << "BAD INPUT!\n";
		} else {
			cout << firstNum % secondNum << endl;
		}
	} else { 
		cout << "BAD INPUT!\n";
	}
}
