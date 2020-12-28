#include <iostream>

using namespace std;

int main() {
  int k, n, w, p = 0;
  cin >> k >> n >> w;

  for (int i = 1; i <= w; i++)
    p += i * k;

  cout << (p - n < 0 ? 0 : p - n) << '\n';
}
