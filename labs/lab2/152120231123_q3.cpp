#include <iostream>
#include <list>
using namespace std;


void contigousAllocationForInt(int);
void contigousAllocationForDouble(double);
void contigousAllocationForChar(char);
void uncontigousAllocationForInt(int);
void uncontigousAllocationForDouble(double);
void uncontigousAllocationForChar(char);


int main(){
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout<<endl;

    contigousAllocationForInt(n);
    contigousAllocationForDouble(n);
    contigousAllocationForChar(n);
    uncontigousAllocationForInt(n);
    uncontigousAllocationForDouble(n);
    uncontigousAllocationForChar(n);

    return 0;
}

void contigousAllocationForInt(int n){
    cout << "contiguous allocation for int type" << endl;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i]= i;
    }
    
    for(int i=0; i<n; i++){
        cout << "X[" << i << "] = " << arr[i] << ", Address: " << &arr[i] << endl;
    }
    delete[] arr;

    cout<< endl;
}

void contigousAllocationForDouble(double n){
    cout << "contiguous allocation for double type" << endl;

    double* arr = new double[n];
    for(int i=0; i<n; i++){
        arr[i]= i+0.5;
    }
    
    for(int i=0; i<n; i++){
        cout << "X[" << i << "] = " << arr[i] << ", Address: " << &arr[i] << endl;
    }
    delete[] arr;

    cout<< endl;
}

void contigousAllocationForChar(char n){
    cout << "contiguous allocation for char type" << endl;

    char* arr = new char[n];
    for(int i=0; i<n; i++){
        arr[i]='A'+i;
    }
    
    for(int i=0; i<n; i++){
        cout << "X[" << i << "] = " << arr[i] << ", Address: " << (void*)&arr[i] << endl; // "(void*)" charlarin adresini gosterebilmek icin (type-casting !!)
    }
    delete[] arr;

    cout<< endl;
}

void uncontigousAllocationForInt(int n){
    cout << "uncontiguous allocation for int type" << endl;
    
    list<int> myList;
    for(int i=0; i<n; i++) myList.push_back(i);

    int index = 0;
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << "X[" << index << "] = " << *it << ", Address: " << &(*it) << endl;
        index++;
    }
    cout<< endl;
}

void uncontigousAllocationForDouble(double n){
    cout << "uncontiguous allocation for double type" << endl;
    
    list<double> myList;
    for(int i=0; i<n; i++) myList.push_back(i+0.5);

    int index = 0;
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << "X[" << index << "] = " << *it << ", Address: " << &(*it) << endl;
        index++;
    }
    cout<< endl;
}

void uncontigousAllocationForChar(char n){
    cout << "uncontiguous allocation for char type" << endl;
    
    list<char> myList;
    for(int i=0; i<n; i++) myList.push_back('A'+i);

    int index = 0;
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << "X[" << index << "] = " << *it << ", Address: " << (void*)&(*it) << endl; // "(void*)" charlarin adresini gosterebilmek icin (type-casting !!)
        index++;
    }
    cout<< endl;
}

