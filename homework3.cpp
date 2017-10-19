#include <iostream>

using namespace std;

struct candyBar {
    char name[25];
    double ves;
    double kalorii;

    void print() {
        cout << name << "\n" << ves << "\n" << kalorii << endl;
    }

};

int main() {
    candyBar snack[3] = {{"Mocha Munch", 2.3, 350},
                         {"Mocha Munch_1", 2.3, 350},
                         {"Mocha Munch_2",   2.3, 350}};
    for (int i = 0; i <= 2; i++)
        snack[i].print();
system("pause);
    return 0;
}