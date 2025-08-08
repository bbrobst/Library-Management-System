#pragma once

#include <string>

class Book
{
private:
	std::string title, author, ISBN;
	bool isAvailable;

public:
	Book(const std::string& title, const std::string& author, const std::string& ISBN, bool isAvailable);

	void displayInfo() const;
	bool checkout();
	bool returnBook();
};

