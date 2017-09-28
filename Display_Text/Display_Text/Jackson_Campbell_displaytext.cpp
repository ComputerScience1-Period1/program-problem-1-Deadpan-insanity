/*
Jackson Campbell - 1st period
Assignment name : Display text
well, I'm just making a program that displays text
*/

// Libraries
#include <iostream>
#include <conio.h>

//namespaces
using namespace std;

//functions()

void pause() {
	cout << "press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

//Main

void main() {
	//display text
	cout << "Jackson Campbell, 1st period, Hello cruel world!" << endl;
		pause();
	//no system(""); commands anymore
}