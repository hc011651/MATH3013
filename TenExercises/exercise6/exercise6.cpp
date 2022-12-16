#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class MyVector {
public:
	using iterator = T*;
	using const_iterator = const T*;
	MyVector(std::size_t size) : data(new T[size]), size_(size){}
	~MyVector() {
		delete[]data;
	}

	iterator begin() { return data; }
	iterator end() { return data + size_;}

	const_iterator begin()const { return data; }
	const_iterator end()const { return data + size_; }

private:
	T* data;
	std::size_t size_;
};

int main() {
	vector <int> v(5);
	std::sort(v.begin(), v.end());
	system("pause");
	return 0;
}