#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> order_numbers;

	order_numbers.push_back(1.5);
	order_numbers.push_back(2.5);
	order_numbers.push_back(3.5);
	order_numbers.push_back(4.5);

	double total = 0.0;

	for (int i = 0; i < order_numbers.size(); i++) {

		total = total + order_numbers[i];

	}

	cout << "Total Numbers are :" << total << "\n";



	

	for (int a = 0; a < 10; a++) {

		std::cout << a << "\n";
	}

	int login = 0;
	int password = 0;
	int trys = 0;

	while (password != 1234 && login != 1234 && trys < 5)
	{
		cout << "login with email";
		cin >> login;

		cout << "password";
		cin >> password;

		trys++;

	}

	if (password == 1234 && login == 1234) {
		cout << "access granted";

	}
	else {
		cout << "You have try to enter 5 times now we will find where you live " << "\n";
		cout << "loading ur data" << "\n";
		for (int q = 0; q  < 1000; q++) {

			std::cout << q << "\n";
		}
	}
}
