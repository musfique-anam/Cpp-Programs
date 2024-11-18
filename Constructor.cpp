#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length, breadth;

    Rectangle (int l,int b) {
        length =l;
        breadth =b;
    }

    int area () {
        return length*breadth;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "Area: " <<rect.area() << endl;
    return 0;
}