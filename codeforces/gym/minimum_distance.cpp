#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int *x = new int[N];
    int *y = new int[N];
    for(int i=0; i<N; i++) {
        cin >> x[i];
    }
    for(int i=0; i<N; i++) {
        cin >> y[i];
    }

    long long maxD = 0;

    for(int i=0; i<N-1; ++i) {
        for(int j=i+1; j<N; j++) {
            long long dx = (x[i]-x[j]),
                      dy = (y[i]-y[j]);
            long long d = dx*dx + dy*dy;
            if(d > maxD) maxD = d;
        }
    }

    cout << maxD << endl;
    
    delete[]x;
    delete[]y;
    return 0;
}