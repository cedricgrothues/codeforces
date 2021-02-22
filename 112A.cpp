#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  for (int i = 0; i < a.size(); i++) {
    a[i] = static_cast<char>(tolower(static_cast<unsigned char>(a[i])));
    b[i] = static_cast<char>(tolower(static_cast<unsigned char>(b[i])));
  }

  if (a < b)
    cout << -1;
  else if (a > b)
    cout << 1;
  else if (a == b)
    cout << 0;
}
