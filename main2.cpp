#include <iostream>
using namespace std;
int main(){
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeuight = Jane + John;
    cout << "Total weight: "<< totalWeigt << endl;

    return 0;
}