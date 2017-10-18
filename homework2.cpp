#include <iostream>
#include <string>
using namespace std;
struct CandyBar {
	std::string brand;
	double ves;
	int kalorii;
};

int main()
{
	

	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << ("snack=") << endl;
	cout << "      Brand: " << snack.brand << endl;
	cout << "      Weight: " << snack.ves << endl;
	cout << "      Calorie: " << snack.kalorii << endl;
	system("pause");
	return 0;
}
