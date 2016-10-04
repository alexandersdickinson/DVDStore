#pragma once
#ifndef H_customerType
#define H_customerType

#include <iostream> 
#include <string>

using namespace std;

class customerType
{
	friend ostream& operator<< (ostream&, const customerType&);

public:
	void print();

	void setCustomerInfo(string firstN, string lastN, int accNum, int dvdInStock);

	int getNoOfCopiesInStock() const;

	void checkOut();

	void checkIn();

	int getNumRentals();

	int getAccNum();

	void printRentedDVD();

	customerType(string firstN = "", string lastN = "", int accNum = 0);

	bool operator==(const customerType&) const;
	bool operator!=(const customerType&) const;

private:
	string firstName;
	string lastName;
	int accountNumber;
	int dvdStock;
};

#endif