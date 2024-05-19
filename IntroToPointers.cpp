#include<iostream>
using namespace std;

int main(){
    int* pPointer = nullptr;
    int integerVar = 5;
    pPointer = &integerVar;

    cout<<"intergerVar"<<integerVar<<endl;
    cout<<"adress of intergerVarn/"<<&integerVar<<endl;

    cout<<"pPointern/"<<pPointer<<endl;
    cout<<"adress of pPointern/"<<&pPointer<<endl;

    return 0;


}