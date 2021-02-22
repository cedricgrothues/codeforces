#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s.size() <= 10) {
      cout << s << '\n';
      continue;
    }
    cout << s.front() << s.length() - 2 << s.back() << '\n';
  }
}
