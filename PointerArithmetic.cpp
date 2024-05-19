#include<iostream>
using namespace std;

int main(){
    int * pPointer = nullptr;
    int Arraynumber[3] ={10,20,30};

    pPointer = Arraynumber;

    cout<<"Adress of Ppointer "<<pPointer<<endl;
     cout<<"Adress of numberArray "<<&Arraynumber<<endl; 
     
     cout<<"The value of pPointer "<<*pPointer<<endl;
 cout<<"Adress of Ppointer "<<++*(pPointer)<<endl;

 pPointer = Arraynumber; 
 cout<<"The value of ++*pPointer "<<++(*pPointer)<<endl;

return 0;
}