#include <iostream>
using namespace std;

int main(){
    int number,range;
    cout<<"Enter an integer:";
    cin>>number;
    cout<<"Enter range:";
    cin>>range;

    for(int i = 1; i <= range; i++){
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}