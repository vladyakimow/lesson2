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
	pizza_papa_j *ww = new pizza_papa_j;
	cout << "Enter company name:";
	cin.getline(ww->name, 25);
	cout << "Enter pizza razmer:";
	cin >> ww->razmer;
	cout << "Enter pizza ves:";
	cin >> ww->ves;
	ww->print();
	system("pause");
	return 0;
}