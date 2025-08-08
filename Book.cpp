#include "Book.h"

#include <iostream>

Book::Book(const std::string& title, const std::string& author, const std::string& ISBN, bool isAvailable) : title(title), author(author), ISBN(ISBN), isAvailable(isAvailable)
{
}

void Book::displayInfo() const
{
	std::cout << "Title: " << title << "\n";
	std::cout << "Author: " << author << "\n";
	std::cout << "ISBN: " << ISBN << "\n";
	std::cout << "Status: " << (isAvailable ? "Available" : "Checked out") << "\n";
}

bool Book::checkout()
{
	if (isAvailable) {
		isAvailable = false;
		return true;
	}
	else {
		return false;
	}
}

bool Book::returnBook()
{
	if (!isAvailable) {
		isAvailable = true;
		return true;
	}
	else {
		return false;
	}
}
