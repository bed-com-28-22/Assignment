#include<iostream>
using namespace std;

int main(){
    int k, l;
    
    cout<<"Enter the number of first array ,max(3)"<<endl;
    cin>>k;
    if(k>3){
        cout<<"maximum number of elements entered"<<endl;
     k=3;
    }
     cout<<"Enter the number of elements for the second array"<<endl;
     cin>>l;
     if (l>3)
     {
        cout<<"maxximum number of elements eentered!!"<<endl;
        l=3;
     }
     
    double** array = new double*[k];
    for(int i =0; i<k;i++){
        array[i] = new double[l];
        }
       cout<<"Enter the values of an array"<<endl;
        for  (int j=0; j<l;j++ ){
            cout<<"Enter the values for("<<i<<","<<j<<"):";
            cin>> array[i][j];
        } 
            cout<<"The values of the array are"<<endl;
             for(int i =0; i<k;i++){
        for  (int j=0; j<l;j++ ){
            cout<<array[i][j]<<endl;;
            //cin>> array[i][j];
        }
        for(int i =0; i<k;i++){
            delete[] array[i]
        }
        delete [] array
    }


    return 0;

}
