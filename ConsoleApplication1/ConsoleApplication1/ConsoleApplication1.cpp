#include <iostream>

class dog {
public:
	void sound() {
		std::cout << "ruff" << std::endl;
	}
};

class cat {
public:
	void sound() {
		std::cout << "meow" << std::endl;
	}
};

int main() {
	dog Dog;
	cat Cat;

	Dog.sound();
	Cat.sound();

	return 0;
}
