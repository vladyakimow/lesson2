#include <iostream>

using namespace std;

struct pizza_papa_j
{
	char name[25];
	int razmer;
	int ves;

	void print() {
		cout << name << "\n" << endl;
		cout << razmer << "\n" << endl;
		cout << ves << "\n" << endl;
	}

};

int main() {
	pizza_papa_j pizza;
	cout << "Enter company name:";
	cin.getline(pizza.name, 25);
	cout << "Enter pizza diameter:";
	cin >> pizza.razmer;
	cout << "Enter pizza ves:";
	cin >> pizza.ves;
	p.print();
	system("pause");
	return 0;
}