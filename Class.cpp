#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
};

int main(){
    Rectangle rect;
    rect.length=5;
    rect.breadth=3;
    cout << "Area: " << rect.area() << endl;
    return 0;
}