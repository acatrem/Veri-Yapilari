#include <iostream>
using namespace std;

int main(){
    
    int number,product = 1;
    cout << "Enter a number:";
    cin>>number;
    cout<<endl;

    for(int i = 1; i <= number; i++){
        product *= i;
    }

    if( number > 0 || number == 0){
    cout<<"A Factorial of "<<number<<" using Iteration is: " << product;
    }else{
        cout<<" negative number ";
    }

    return 0;
}