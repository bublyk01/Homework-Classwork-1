#include <iostream>
#include <vector>
#include <memory>

class animal {
public:
	virtual void say() const = 0;
	virtual ~animal() = default;
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
	std::vector<std::unique_ptr<animal>> animals;

	animals.push_back(std::make_unique<dog>());
	animals.push_back(std::make_unique<cat>());

	for (const auto& animal : animals) {
		animal->say();
	}

	return 0;
}
