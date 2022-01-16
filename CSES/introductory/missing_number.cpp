#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long sum = 0;
  for (int i = 1; i < n; i++) {
    long long k;
    cin >> k;
    sum += k;
  }
  cout << n * (n + 1) / 2 - sum;
  return 0;
}