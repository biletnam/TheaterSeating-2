// TheaterSeating.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <array>
#include <iostream>

using namespace std;

class Location {
private:
	int _row;
	int _column;
public:		
	/// <summary>
	/// Returns the row #.
	/// </summary>
	inline int getRow() const { return _row; }	
	/// <summary>
	/// Returns the column #.
	/// </summary>
	/// <returns></returns>
	inline int getColumn() const { return _column; }

	/// <summary>
	/// Initializes a new instance of the <see cref="Coordinate"/> class.
	/// </summary>
	Location() : _row(0), _column(0) {}
	/// <summary>
	/// Initializes a new instance of the <see cref="Coordinate"/> class.
	/// </summary>
	/// <param name="row">The row.</param>
	/// <param name="column">The column.</param>
	Location(const int row, const int column) : _row(row), _column(column) {}
};

/// <summary>
/// Represents a single seat in the theater.  Are all seats the same price?
/// </summary>
class Seat {
private:
	double _price;
	bool _available;
public:	
	/// <summary>
	/// Gets the price of the seat.
	/// </summary>
	/// <returns></returns>
	double getPrice() const { return _price; }

	/// <summary>
	/// Sets the price of the seat.
	/// </summary>
	/// <param name="price">The price.</param>
	void setPrice(const double price) { _price = price; }

	/// <summary>
	/// Determines whether this instance is available.
	/// </summary>
	/// <returns>
	///   <c>true</c> if this instance is available; otherwise, <c>false</c>.
	/// </returns>
	bool isAvailable() const { return _available; }
	
	/// <summary>
	/// Initializes a new instance of the <see cref="Seat"/> class.
	/// </summary>
	Seat() : _price(0.0), _available(false) {}
};

/// <summary>
/// This class represents the theater.
/// </summary>
class Theater {
private:
	array<array<Seat, 10>, 10> _seating;
public:
	/// <summary>
	/// Initializes a new instance of the <see cref="CTheater"/> class.
	/// </summary>
	Theater() {}
};

/// <summary>
/// Represents a kiosk that provides a user with the ability to purchase tickets
/// or get information about available tickets.
/// </summary>
class CKiosk {
private:
	Theater _theater;
public:	
	/// <summary>
	/// Displays the welcome message.
	/// </summary>
	void displayWelcomeMessage();	
	/// <summary>
	/// Displays the help message.
	/// </summary>
	void displayHelp();	
	/// <summary>
	/// Displays the summary information.
	/// </summary>
	void displaySummary();	
	/// <summary>
	/// Shows the seating by row.
	/// </summary>
	void showSeatingByRow();	
	/// <summary>
	/// Shows the seating (all).
	/// </summary>
	void showSeating();	
	/// <summary>
	/// Shows the # of tickets available.
	/// </summary>
	void showTicketsAvailable();	
	/// <summary>
	/// Shows the # of tickets sold.
	/// </summary>
	void showTicketsSold();	
	/// <summary>
	/// Help the user purchase tickets.
	/// </summary>
	void purchaseTickets();
	
	/// <summary>
	/// Gets a command from the user.
	/// </summary>
	void getUserCommand();
	
	/// <summary>
	/// Starts the user session.  This method only returns
	/// when the user has completed their interactive session.
	/// </summary>
	void startUserSession();
};

void displayWelcomeMessage() {
}


int main()
{
    return 0;
}

