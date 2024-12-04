#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3)";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You choose One." << endl;
            break;
        case 2:
            cout << "You choose Two." << endl;
            break;
        case 3:
            cout << "You choose Three." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}