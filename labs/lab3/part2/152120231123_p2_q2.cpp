#include <iostream>
#include <list>
using namespace std;

bool isPalindrome(list<int>& L) {
    auto front = L.begin();
    auto back = L.rbegin();

    while (front != L.end() && back != L.rend()) {
        if (*front != *back) {
            return false;
        }
        ++front;
        ++back;
    }
    return true;
}

int main(){
    list<int> L1 = {1, 2, 3, 2, 1};
    list<int> L2 = {1, 2, 3, 4, 5};

    if(isPalindrome(L1)){
        cout << "L1 is a palindrome." << endl;
    } else {
        cout << "L1 is not a palindrome." << endl;
    }
    
    if(isPalindrome(L2)){
        cout << "L2 is a palindrome." << endl;
    } else {
        cout << "L2 is not a palindrome." << endl;
    }

    return 0;
}