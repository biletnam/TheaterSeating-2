////////////////////////////////////////////////////////////////////////////////
// Instructor: R. Bradley Andrews
// Class: PRG/410
// Group: Team-A
////////////////////////////////////////////////////////////////////////////////

// TheaterSeating.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Kiosk.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	Kiosk kiosk;
	kiosk.startUserSession();

	// Give the instructor a chance to view the screen and exit the
	// application properly.

	string line;
	cout << "Please press enter to exit the application." << endl;
	getline(cin, line);

	return 0;
}