#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;

  string inp;
  for (int i = 0; i < n; i++) {
    cin >> inp;
    if (inp[1] == '+')
      sum++;
    else
      sum--;
  }

  cout << sum << '\n';
}
