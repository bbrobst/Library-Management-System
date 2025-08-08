#include <iostream>
#include "Book.h"


int main() {
	Book book1("Harry Potter", "Jerry R. Sprousling", "82983-3892-3893", true);

	if (book1.checkout()) {
		std::cout << "Book checked out successfully.\n";
	}
	else {
		std::cout << "Book is already checked out.\n";
	}
	book1.displayInfo();
	std::cout << "\n";

	if (book1.returnBook()) {
		std::cout << "Book returned successfully.\n";
	}
	else {
		std::cout << "Book is already available.\n";
	}
	book1.displayInfo();
}