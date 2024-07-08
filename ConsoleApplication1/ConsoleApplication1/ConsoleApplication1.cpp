#include <iostream>

void dog();
void cat();

int main() {
	dog();
	cat();
	return 0;
}

void dog() {
	std::cout << "ruff" << std::endl;
}

void cat() {
	std::cout << "meow" << std::endl;
}