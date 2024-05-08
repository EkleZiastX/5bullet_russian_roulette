#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    cout << "Welcome to russian roulette" << endl;
    while (true) {
        cout << "Press Enter, for shot..." << endl;
        cin.get(); 

        int chamber = rand() % 6 + 1; 

        if (chamber == 1) {
            cout << "Congratulations! you survived!" << endl;
        }
        else {
            cout << "Alas, you lost... The bullet will shoot!" << endl;
        }

    }
    return 0;
}
// 5 bullets :)