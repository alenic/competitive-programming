#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string snakeName, deadiest;
    float minMLD = 10;

    for(int i=0; i<N; i++) {
        float mld;
        cin >> snakeName >> mld;
        if(mld < minMLD) {
            minMLD = mld;
            deadiest = snakeName;
        }
    }
    
    cout << deadiest << endl;
    
    return 0;
}