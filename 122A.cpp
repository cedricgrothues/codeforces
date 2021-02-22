#include <iostream>

const int lns[] = {4, 7, 44, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};

int main() {
  bool ln = false;

  int n;
  std::cin >> n;

  for (int i = 0; i < 13; i++) {
    if (n % lns[i] == 0) {
      ln = true;
      break;
    }
  }

  std::cout << (ln ? "YES" : "NO") << '\n';
  return 0;
}
