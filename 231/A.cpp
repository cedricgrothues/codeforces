#include <iostream>

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int s = 0;
    for (int j = 0; j < 3; j++) {
      int t;
      cin >> t;
      s += t;
    }
    if (s > 1)
      sum++;
  }

  cout << sum << '\n';
}
