#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	string arr="          Janurary  Febuarary March     April     May       June      July      Augest    September October   November  December   ";
	int a;

	cout << "Enter a month in a number (1..12): ";
	cin >> a;

	cout << "Month " << a << " is " << arr.substr(a*10,10);

	return 0;

}