/*
 P2 Q1 C
 
    - Array listler index kullanimi sayesinde hizli erisim saglarken, linked listler bas node'den itibaren traversing gerektirir.
    - Double linked listler her iki yönde de traversing tanıyarak belirli işlemleri daha verimli hale getirir.
    - Ekleme ve silme işlemleri genellikle linked listlerde, özellikle büyük veri setlerinde, array listlere göre daha hızlıdır.
    - Array listler, contiguous memory allocation sayesinde daha iyi önbellek performansı sunar.
    - Array list O(1) erisim süresi sunarken, linked listler O(n) erisim süresi sunar.
    
*/


#include <iostream>
#include <list>
using namespace std;

list<int> ordered_union(const list<int>& A1, const list<int>& A2, int& common){
    common = 0;
    list<int> result;
    auto tmp1 = A1.begin();
    auto tmp2 = A2.begin();

    while(tmp1 != A1.end() && tmp2 != A2.end()){
        if(*tmp1 < *tmp2){
            result.push_back(*tmp1);
            ++tmp1;
        }
        else if(*tmp2 < *tmp1){
            result.push_back(*tmp2);
            ++tmp2;
        }
        else{
            result.push_back(*tmp1);
            ++common;
            ++tmp1;
            ++tmp2;
        }
    }

    while(tmp1 != A1.end()){
        result.push_back(*tmp1);
        ++tmp1;
    }
    while(tmp2 != A2.end()){
        result.push_back(*tmp2);
        ++tmp2;
    }


    return result;
}

int main(){
    int n1,n2;
    cout<<"A1 eleman sayisi: ";
    cin>>n1;
    cout<<"A1 elemanlari sirali sekilde giriniz: ";
    list<int> A1;
    for(int i=0;i<n1;i++){
        int val;
        cin>>val;
        A1.push_back(val);
    }

    cout<<"A2 eleman sayisi: ";
    cin>>n2;
    cout<<"A2 elemanlari sirali sekilde giriniz: ";
    list<int> A2;
    for(int i=0;i<n2;i++){
        int val;
        cin>>val;
        A2.push_back(val);
    }
    int common = 0;
    list<int> result = ordered_union(A1, A2, common);
    
    for(const auto& val : result){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Common element sayisi: "<<common<<endl;
    cout<<"Total size: "<<result.size()<<endl;

    return 0;
}