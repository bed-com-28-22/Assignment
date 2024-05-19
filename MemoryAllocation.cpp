#include<iostream>
using namespace std;

int main(){
    int numberOfElements =0;
    int * dynamicArray = nullptr;

    cout<<"How many number of elements to you want?"<< endl;
    cin>> numberOfElements;
    dynamicArray = new int [numberOfElements];

    if(dynamicArray = nullptr){
        cout<<"Error: memory could not be allocated"<<endl;
    }
    else{
        for(int i = 0; i< numberOfElements; i++){
            cout<<"enter number"<<endl;
            cin>> dynamicArray[i];
        }
        cout<<"You have entered:"<<endl;
        for(int j = 0; j< numberOfElements; j++){
            cout<<dynamicArray[j]<<endl;
        }
        delete[] dynamicArray;
    }
    return 0;

}