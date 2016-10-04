#include <iostream>
#include <string>
#include "customerType.hpp"

using namespace std;

void customerType::print() {
	cout << accountNumber << endl;
	cout << firstName << " " << lastName << endl;
}

void customerType::setCustomerInfo(string firstN, string lastN, int accNum, int dvdInStock) {
	firstName = firstN;
	lastName = lastN;
	accountNumber = accNum;
	dvdStock = dvdInStock;
}

int customerType::getNoOfCopiesInStock() const {
	return dvdStock;
}

void customerType::checkOut() {
	if (getNoOfCopiesInStock() > 0)
		dvdStock--;
	else
		cout << "Currently out of stock." << endl;
}

void customerType::checkIn() {
	dvdStock++;
}

int customerType::getNumRentals() {
	return getNoOfCopiesInStock();
}

int customerType::getAccNum() {
	return accountNumber;
}

void customerType::printRentedDVD() {
	cout << getNoOfCopiesInStock() << endl;
}

customerType::customerType(string firstN, string lastN, int accNum) {
    setCustomerInfo(firstN, lastN, accNum, dvdStock);
}

bool customerType::operator==(const customerType& other) const {
	return (accountNumber == other.accountNumber);
}

bool customerType::operator!=(const customerType& other) const {
	return (accountNumber != other.accountNumber);
}

ostream& operator<< (ostream& osObject, const customerType& num) {
	string fName = num.firstName;
	string lName = num.lastName;
	osObject << endl;
	osObject << "Account Number: " << num.accountNumber << " " << fName << " " << lName << endl;
	return osObject;
}