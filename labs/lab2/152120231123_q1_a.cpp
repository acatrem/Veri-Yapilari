#include <iostream>
using namespace std;

int recursiveFunc(int n){

    
    if(n<=1){
        return 1;
    }

    return n * recursiveFunc(n-1);
}

int main(){
    
    int number;
    cout << "Enter a number:";
    cin>>number;
    cout<<endl;

    if( number > 0){
    cout<<"A Factorial of "<<number<<" using Recursion is: "<< recursiveFunc(number);
    }else{
        cout<<" negative number ";
    }

    return 0;
}