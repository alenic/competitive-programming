#include <iostream>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;

    int thorns_sum = 0;
    int i=0;
    bool escape=false;
    while(i<n) {
        int a;
        cin >> a;
        thorns_sum += a;
        if(thorns_sum >= k) {
            escape = true;
            ++i;
            break;
        }
        ++i;
    }
    
    cout << (escape ? i : -1) << endl;
    
    return 0;
}