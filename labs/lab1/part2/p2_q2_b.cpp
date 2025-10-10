#include <iostream>
using namespace std;

int sumN(int n, int sum=0){
    if(n<=0){
        cout<<sum<<endl;
        return sum;
    }
    return sumN(n-1, sum+n);
}

int main(){
    int n=5;
    cout << "The sum of numbers from 1 to "<< n << ": ";
    sumN(n);

    //Complexity: O(n)

    return 0;   
}