#include <iostream>
#include <string>

int main() {
  int n, t;

  std::string in;
  std::cin >> n >> t >> in;

  while (t--) {
    for (int i = 1; i < n; i++) {
      if (in[i] == 'G' && in[i - 1] == 'B') {
        in[i] = 'B';
        in[i - 1] = 'G';
        i++;
      }
    }
  }

  std::cout << in;

  return 0;
}
