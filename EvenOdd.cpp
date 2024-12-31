#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    b=a%2;
    if(b==0){
        cout << "This is an Even Number!"<<endl;
    }else{
        cout << "This is an Odd Number!"<<endl;
    }
    return 0;
}