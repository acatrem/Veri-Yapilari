#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numbers;
    int n1,n2;
    cout<<"Size of vector is: ";
    cin>>n1;

    for(int i=0; i<n1; i++){
        int num;
        cin>>num;
        numbers.push_back(num);
    }

    cout<<"Vector elements are given below: "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }

    cout<<endl<<"Size of vector is: ";
    cin>>n2;
    

    for(int i=0; i<n2-n1; i++){
        cout<<"Enter number: ";
        int num;
        cin>>num;
        numbers.insert(numbers.begin(), num);
    }

    

    cout<<"Updated vector elements are given below: "<<endl;
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }

    vector<int>::iterator reverse_it;
    cout<<endl<<"Output of reverse array: ";

    for(auto reverse_it = numbers.rbegin(); reverse_it != numbers.rend(); reverse_it++){
        cout<<*reverse_it<<" ";
    }
    cout<<endl;

    numbers.pop_back();
    cout << "Output of after remove last element: ";
    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }

    return 0;
}