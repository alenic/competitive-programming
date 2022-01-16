#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;

  ll maxsub = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    ll count = i;
    while (s[i] == s[i + 1]) {
      i++;
    }
    count = i - count;
    if (count > maxsub) maxsub = count;
  }
  cout << maxsub + 1;
  return 0;
}