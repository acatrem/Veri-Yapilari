#include <iostream>
using namespace std;

int printN(int n){

    if(n<=0){
        return 0;
    }

    printN(n-1);
    cout<<n<<" ";
    return 0;
}

int main(){

    cout<<"The natural numbers are: ";
    printN(50);

    //Complexity: O(n)

    return 0;
}