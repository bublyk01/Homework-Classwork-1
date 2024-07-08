#include <iostream>

class animal {
public:
	virtual void say() const = 0;
};

class dog : public animal {
public:
	void say() const override {
		std::cout << "ruff" << std::endl;
	}
};

class cat : public animal {
public:
	void say() const override {
		std::cout << "meow" << std::endl;
	}
};

int main() {
	dog Dog;
	cat Cat;

	Dog.say();
	Cat.say();

	return 0;
}
