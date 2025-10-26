#include <iostream>
#include <list>
using namespace std;

list<int>::iterator binary_search(list<int>& L, int target){
    if(L.empty()) return L.end();

    int size = L.size();
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int mid = left + (right -left) / 2;
        auto it = L.begin();
        advance(it, mid);
        
        if(*it == target){
            return it;
        }
        else if(*it < target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }

    return L.end();
}



int main(){
    list<int> L = {1,3,5,7,9,11,13,15,17,19};
    int target = 2;
    auto result = binary_search(L, target);
    if(result != L.end()){
        cout << "Found: " << *result << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}