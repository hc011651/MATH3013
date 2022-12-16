#include <iostream>
#include <vector>
using namespace std;
template<class T>
class vector_expression
{
public:
	vector_expression(unsigned input_size,  T input_data) :size(input_size) ,data(new T [size]) {
		for (unsigned i = 0; i < size; i++) {
			data[i] = input_data;
		}
	}
	unsigned size01() {
		return size;
	}
	T operator [] (unsigned i) {
		return data[i];
	}
	~vector_expression() {

	}
private:
	unsigned size = 0;
	T* data;
};
class ones :public vector_expression<int> {
public:
	ones(unsigned input_size):vector_expression(input_size,1){}
};
int main() {
	ones u(2);
	for (unsigned i = 0; i < u.size01(); i++)
		cout << u[i];
	system("pause");
	return 0;
}