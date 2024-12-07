//This program will return the reverse of your given number

#include <iostream>
using namespace std;

int main () {
    int num, reversed = 0, reminder;
    cout << "Enter a number : ";
    cin >> num;

    while (num !=0) {
        reminder = num % 10;
        reversed = reversed * 10 + reminder;
        num /=10;
    }

    cout << "Reversed Number : " << reversed << endl;
    return 0;
}