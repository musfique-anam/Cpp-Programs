#include<iostream>
using namespace std;

int main(){
    //For Loop
    for (int i=1; i<=5; i++){
        cout<< "Number: "<< i << endl;
    }

    int i=1;
    
    //While Loop
    while(i<=5){
        cout<<"Number: "<<i<<endl;
        i++;
    }

    //Do-While Loop
    do{
        cout<<"Number: "<<i<<endl;
        i++;
    }while(i<=5);

    return 0;
}