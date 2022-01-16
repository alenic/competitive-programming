#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n > 1 && n <= 3) {
    cout << "NO SOLUTION";
  } else {
    for (int i = 1; i <= n / 2; i++) {
      cout << i * 2 << " ";
    }
    for (int i = 0; i < n / 2; i++) {
      cout << 2 * i + 1 << " ";
    }
    cout << 2 * (n / 2) + 1;
  }

  return 0;
}