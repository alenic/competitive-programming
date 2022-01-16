#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long delta_sum = 0;
  long long prev;
  for (int i = 0; i < n; i++) {
    long long k;
    cin >> k;
    if (i == 0) {
      prev = k;
      continue;
    }
    if (k < prev) {
      delta_sum += prev - k;

    } else {
      prev = k;
    }
  }
  cout << delta_sum;
  return 0;
}