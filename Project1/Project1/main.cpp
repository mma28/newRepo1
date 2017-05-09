#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

void function1(){
	cout << "FUNCTION 1" << endl;
}

void function2(){
	cout << "FUNCTION 2" << endl;
}

void random(){
	srand(time(0));
	int m = rand() % 2;

	if (m == 1) function1();
	else function2();
}

void main(){
	random();
	system("Pause.");
}