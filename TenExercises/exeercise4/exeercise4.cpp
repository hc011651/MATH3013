#include <iostream>
#include <vector>
using namespace std;
class polynomial
{
public:
	vector<int>degree;
	vector<double>coefficients;
	polynomial(vector<int>input_degree, vector<double>input_coefficients)
	{
		for (auto item : input_degree)
			degree.push_back(item - 1);
		for (auto item : input_coefficients)
			coefficients.push_back(item);
	}
	~polynomial()
	{
		vector<int>().swap(degree);
		vector<double>().swap(coefficients);
	}
	friend ostream& operator<<(ostream& cout, polynomial& pol);
};
ostream& operator<<(ostream& cout, polynomial& pol)
{
	for (int i = 0; i < pol.degree.size(); i++)
	{
		if (pol.coefficients[i] > 0)
		{
			if (i != 0)
				cout << "+";
		}
		cout << pol.coefficients[i] << "x^" << pol.degree[i];
	}
	return cout;
}
int main()
{
	vector<int>input_degree = { 4,3,2 };
	vector<double>input_coefficients = { 10,20,30 };
	polynomial pol(input_degree, input_coefficients);
	cout << pol;
	system("pause");
	return 0;
}