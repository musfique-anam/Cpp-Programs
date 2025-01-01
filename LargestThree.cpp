#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;

    cout<<"Enter three numbers: ";

    cin >> num1>>num2>>num3;

    if(num1>=num2 && num1>=num3){
        cout<<"Number 1 is Largest!";
    }else if(num2>=num1 && num2>=num3){
        cout<<"Number 2 is Largest!";
    }else{
        cout<<"Number 3 is Largest!";
    }

    return 0;
}