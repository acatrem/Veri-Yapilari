#include <iostream>
using namespace std;

int main(){

    int n;
    int sum=0;
    int i=0;

    cout<<"Enter the number of consecutive positive integers (starting from 1):";
    cin>>n;

    do{

        sum+= n;
        n--;

    }while(n>i);

    cout<<"The sum is: "<<sum;

    //Complexity : O(n)
    return 0;
}