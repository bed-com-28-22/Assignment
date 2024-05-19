#include<iostream>
#include<string>
using namespace std;

int main(){
    int * anyNumber=new int;
    string * str = new string;

cout<<"Enter any number"<<endl;
cin>>*anyNumber;
cout<<"Enter string"<<endl;
cin>>*str;

delete anyNumber;
delete str;
return 0;
}