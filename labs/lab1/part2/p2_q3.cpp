#include <iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int n;
    cout<<"Input a number: ";
    cin>>n;

    cout<<"The factorial of "<<n<<" is: ";
    cout<<factorial(n)<<endl;

    // Complexity: O(n)

    return 0;
}