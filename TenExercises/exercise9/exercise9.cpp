#include <iostream>
#include <map>
using namespace std;
int main() {
	map<string, unsigned long>phone_numbers;
	phone_numbers["Michael"] = 68593720;
	phone_numbers["Sienna"] = 33675482;
	phone_numbers["Alex"] = 28283737;
	phone_numbers["Rosita"] = 78456634;
	map<string, unsigned long>::iterator numbers;
	for (numbers = phone_numbers.begin(); numbers != phone_numbers.end(); ++numbers) {
		if (numbers->first == "Alex")
			cout << "Alex is " << numbers->second << '\n';
		if (numbers->first == "Mushroom")
			cout << "Mushroom is " << numbers->second << '\n';
		if (numbers->second == 33675482)
			cout << "33675482 is " << numbers->first << '\n';
		if (numbers->second == 12345678)
			cout << "12345678 is " << numbers->first << '\n';
	}
	system("pause");
	return 0;
}