#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the n:";
    cin>>n;

    for(int i=n; i>=0; i--){
        cout<<i<<" ";
    }

    //Complexity : O(n)
    return 0;
}