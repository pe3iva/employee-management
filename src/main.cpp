#include <iostream>

int main() {

	std::cout << "Welcome to employee management app!\n\n";

	std::cout << "Enter an username: ";
	std::string username{};
	std::cin >> username;

	std::cout << '\n' << '\n';

	std::cout << "Enter a password: ";
	std::string password{};
	std::cin >> password;

	do {
		
		std::cout << "Your password must be at least 5 characthers long.\n";
		std::cout << "Enter a password: ";
		std::cin >> password;

	} while (password.length() < 5);

	std::cout << "Welcome, " << username << "!\n";


}