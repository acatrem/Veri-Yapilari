#include <iostream>
#include <ctime>
using namespace std;

int main(){

    const int m = 1000; // 1 thousand , m degeri 5000 olursa sure 0.07 saniye olur
    int** arr = new int*[m];
    for(int i=0; i<m; i++){
        arr[i] = new int[m];
    }

    clock_t before = clock();

    for (int i = 0; i< m; i++){
        for (int j = 0; j<m ; j++){
            arr[i][j] = i;
        }
    }

    clock_t duration = clock() - before;

    cout << "Duration: " << float(duration) / CLOCKS_PER_SEC << " seconds" << endl;
    // output -> "Duration: 0.002 seconds"
    //Complexity : O(m^2)

    for (int i = 0; i < m; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}