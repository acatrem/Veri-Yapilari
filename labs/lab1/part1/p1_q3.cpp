#include <iostream>
#include <ctime>
using namespace std;

int main(){

    const int m = 100; // m degeri 200 olarak degisirse sure 1.5 saniyeye cikar

    static int arr[m][m][m];

    clock_t before = clock();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < m; k++){
                arr[i][j][k] = i;
            }
        }
    }

    clock_t duration = clock() - before;

    cout << "Duration: " << float(duration) / CLOCKS_PER_SEC << " seconds" << endl;
    // output -> "Duration: 0.006 seconds"
    //Complexity : O(m^3)

    return 0;
}