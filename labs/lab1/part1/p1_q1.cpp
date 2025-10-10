#include <iostream>
#include <ctime>
using namespace std;

int main(){
    const int m = 1000000; // 1 million , m degeri 10 milyon oldugunsa sure 0.2 saniye olur
    static int arr[m];

    clock_t before = clock();

    for(int i = 0; i < m; i++){
        arr[i] = i;
    } 
    cout << endl;

    clock_t duration = clock() - before;
    
    cout << "Duration: " << float(duration) / CLOCKS_PER_SEC << " seconds" << endl; 

    // output -> "Duration: 0.004 seconds"
    //Complexity : O(m)

    return 0;
}