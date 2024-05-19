#include <iostream>
using namespace std;

int main() {
    int k, l;

    cout << "Enter the number of elements in k (max 3): ";
    cin >> k;
    if (k> 3) {
        cout << "Maximum number of entered." << endl;
        k= 3;
    }

    cout << "Enter the number of elements  (max 3): ";
    cin >> l;
    if (l > 3) {
        cout << "Maximum number entered." << endl;
        l= 3;
    }

    double** array = new double*[k];
    for (int i = 0; i < k; ++i) {
        array[i] = new double[l];
    }

    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < l; ++j) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> array[i][j];
        }
    }

    cout << "Values of the array:" << endl;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < l; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < k; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
