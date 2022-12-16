#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<double> v = { -9.3, -7.4, -3.8, -0.4, 1.3, 3.9, 5.4, 8.2 };
	std::sort(v.begin(), v.end());
	cout << "sorted \n";
	for (auto x : v)
		cout << x << " ";
	system("pause");
	return 0;
}