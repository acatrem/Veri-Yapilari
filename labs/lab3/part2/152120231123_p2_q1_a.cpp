#include <iostream>
#include <forward_list>
using namespace std;

forward_list<int> ordered_union(const forward_list<int>& L1, const forward_list<int>& L2){
    forward_list<int> result;
    auto tmp1 = L1.begin();
    auto tmp2 = L2.begin();

    while(tmp1 != L1.end() && tmp2 != L2.end()){
        if(*tmp1 < *tmp2){
            result.push_front(*tmp1);
            ++tmp1;
        }
        else if(*tmp2 < *tmp1){
            result.push_front(*tmp2);
            ++tmp2;
        }
        else{
            result.push_front(*tmp1);
            ++tmp1;
            ++tmp2;
        }
    }

    while(tmp1 != L1.end()){
        result.push_front(*tmp1);
        ++tmp1;
    }
    while(tmp2 != L2.end()){
        result.push_front(*tmp2);
        ++tmp2;
    }

    result.reverse();
    return result;

}

int main(){
    int n1,n2;
    cout<<"L1 eleman sayisi: ";
    cin>>n1;
    cout<<"L1 elemanlari sirali sekilde giriniz: ";
    forward_list<int> L1;
    for(int i=0;i<n1;i++){
        int val;
        cin>>val;
        L1.push_front(val);
    }
    L1.reverse();

    cout<<"L2 eleman sayisi: ";
    cin>>n2;
    cout<<"L2 elemanlari sirali sekilde giriniz: ";
    forward_list<int> L2;
    for(int i=0;i<n2;i++){
        int val;
        cin>>val;
        L2.push_front(val);
    }
    L2.reverse();

    forward_list<int> result = ordered_union(L1,L2);
    
    for(const auto& val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
