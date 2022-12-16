#include <iostream>
#include <vector>
using namespace std;
class polynomial
{
public:
    polynomial()
    {

    }
    polynomial(vector<int>input_degree, vector<double>input_coefficients)
    {
        for (auto item : input_degree)
            degree.push_back(item);
        for (auto item : input_coefficients)
            coefficients.push_back(item);
    }
    ~polynomial()
    {
        vector<int>().swap(degree);
        vector<double>().swap(coefficients);
    }

    friend ostream& operator<<(ostream& cout, polynomial& pol);
    polynomial& operator=(polynomial& p)
    {
        for (auto item : p.degree)
            this->degree.push_back(item);
        for (auto item : p.coefficients)
            this->coefficients.push_back(item);
        return *this;
    }
private:
    vector<int>degree;
    vector<double>coefficients;
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
        if (pol.coefficients[i] < 0)
        {
            if (i != 0)
                cout << "-";
        }
        cout << pol.coefficients[i] << "x^" << pol.degree[i];
    }
    return cout;
}

void f(double c2, double c1, double c0)
{
    vector<double>input_coefficients = { c2,c1,c0 };
    vector<int>input_degree = { 3,2,1 };
    polynomial p(input_degree, input_coefficients);
    cout << "The polynomial is:" << p << endl;
    polynomial p_copy;
    p_copy = p;
    cout << "The copyed polynomial is:" << p_copy << endl;
}

int main()
{
    f(3, 2, 1);
    return 0;
}