#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N;
    cin >> X;
    int *a = new int[N];
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    sort(a, a+N);

    int i=0;
    long long sum = 0;
    while(i<N) {
        sum += a[i];
        if(sum > X) break;
        i++;
    }
    cout << i << endl;
    
    delete[]a;

    return 0;
}