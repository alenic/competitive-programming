#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << 0 << endl;
  for(int k=2; k<=n; k++) {
    long long k2 = k*k;
    cout << k2*(k2-1)/2 - max(k-2,0)*max(k-1,0)*4<< endl;
  }

  return 0;
}