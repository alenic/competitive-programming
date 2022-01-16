#pragma GCC push_options
#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>

using namespace std;

inline int ri(){
	int t = 0;
	char c;
	while((c=getchar_unlocked()-48)>=0&&c<10)t=t*10+c;
	return t;
}

int main() {
  int n=ri(), count=0;

  int vector[200000];
  for (int i=0; i<n; i++) {
    vector[i] = ri();
  }
  sort(vector, vector+n);
  for (int i=0; i<n-1; i++) {
    if (vector[i] < vector[i+1]) {
      count++;
    }
  }

  cout << count;
  return 0;
}