#include <iostream>

using namespace std;

int main() {
  int n, k, s = 0;
  cin >> n >> k;
  int scores[n];

  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    scores[i] = j;
  }

  for (int i = 0; i < n; i++)
    if (scores[i] > 0 && scores[i] >= scores[k - 1])
      s++;

  cout << s << '\n';
}
