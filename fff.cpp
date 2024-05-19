#include<iostream>
#include<fstream>
using namespace std;

int main(){
char data[100];

ofstream outfile;
outfile.open("afile.data");

cout<<"writing the file"<<endl;
cout<<"enter the name"<<endl;
cin.getline(data, 100);

outfile<<data<<endl;

cout<<"enter your age"<<endl;
cin>>data;
cin.ignore();

outfile<<data<<endl;
outfile.close();

ifstream infile;
infile.open("afile.dat");

cout<<"reading the data from the file"<<endl;
infile>>data;

cout<<data<<endl;

infile>>data;
cout<<data<<endl;

infile.close();

    return 0;

}