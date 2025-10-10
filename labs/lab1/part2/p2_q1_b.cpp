#include <iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int sum=0;
    cout<<"Enter the number of consecutive positive integers (starting from 1):";
    cin>>n;

    while(i<=n){
        sum += i;
        i++;
    }

    cout<<"The sum is: "<<sum;

    //Complexity : O(n)
    return 0;
}