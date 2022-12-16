#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	std::ofstream age_file("age.txt");
	int age = 0;
	cout << "What is you age ?" << endl;
	cin >> age;
	cout << " Your age is " << age << " . " << endl;
	age_file << "Your age is " << age << " . " << std::endl;

	system("pause");

	return 0;
}