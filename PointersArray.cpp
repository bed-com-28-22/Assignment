#include<iostream>
using namespace std;

int main(){
    int numberArr[5];
     int * pPointer = nullptr;
     pPointer = numberArr;

     *pPointer = 10;

     pPointer++;
     *pPointer = 20;

     pPointer = &numberArr[2];
     *pPointer = 30;

     pPointer = numberArr+3;
     *pPointer = 40;

     pPointer = numberArr+4; 
     *pPointer = 50;

for(int i = 0; i<5; i++){
    cout<<numberArr[i]<<endl;
}


}