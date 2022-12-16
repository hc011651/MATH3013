#include <iostream>
using namespace std;
class odd_iterator {
	odd_iterator(){

	}
	using odd = odd_iterator; 
public:
	odd_iterator(int given_value) {
		if ((given_value % 2) == 0)
			throw "given_value is even. Odd value is required.";
		else
			value = given_value;
	}
	odd_iterator(const odd & other) : value{other.value}{}

	odd& operator=(const odd& other) {
		value = other.value;
		return *this;
	}

	odd& operator++() {
		value += 2;
		return *this;
	}
	odd operator++(int) {
		odd odd_value = *this;
		this->value += 2;
		return odd_value;
	}
	int operator*()const { return value; }

	bool operator==(const odd& other) const { return value == other.value; }
	bool operator!=(const odd& other) const { return !(*this == other); }

private:
	int value{ 1 };
};
int main(int argc, const char * argv[]) {
	odd_iterator u(3); 
	system("pause");
	return 0;
}