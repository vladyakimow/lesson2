#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int Size = 15;
	char name1[80];
	char name2[80];
	char grade;
	char age[80];
	

	cout << "What is your first name? ";
	cin.get(name1, 20);
	cout << "What is your last name? ";
	cin >> name2;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;



	cout << "Name: " << (name2) << ", " << (name1) << "\n";
	cout << "Grade: " <<(char) (grade+1) <<"\n";
	cout << "Age: " << (age);
	system("pause");
	return 0;

}