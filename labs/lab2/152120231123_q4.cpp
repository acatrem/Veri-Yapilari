#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter row: ";
    cin >> rows;
    cout <<"Enter col: ";
    cin >> cols;

    int* arr = new int[rows * cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i*cols + j] = 100 + (i*cols + j)*4;
            cout << "&X[" << i << "][" << j << "]= " << arr[i*cols + j] << ", Address = " << &arr[i*cols + j] << endl;
        }
    }
    cout << "Total memory used: " << rows * cols * sizeof(int) << " bytes" << endl;
    delete[] arr;

    return 0;
}