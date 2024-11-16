#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements : ";
    for (int i =0; i < n; i++) {
        cin >> array[i];
    }
    cout << "The entered elements are : ";
    for (int i=0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}