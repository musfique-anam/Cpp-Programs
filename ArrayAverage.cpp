#include<iostream>
using namespace std;

int main(){
    int n;
    float data[100],sum=0.0,average;

    //Array Size
    cout<< "How many numbers there?"<<endl;
    cin >> n;

    //Ensure Array Size 
    while(n>100|| n<=0){
        cout<<"Error! Number should be in range of (1-100)"<<endl;
        cout<<"Enter the number again: ";
        cin >> n;
    }

    //Taking Numbers
    for(int i =0;i<n;i++){
        cout<<i+1<<". Entered number : ";
        cin>>data[i];
        sum+=data[i];
    }

    average=sum/n;
    cout<<"Average = "<<average;

    return 0;
}