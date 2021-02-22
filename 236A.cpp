#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string u;
  cin >> u;
  sort(u.begin(), u.end());
  u.erase(unique(u.begin(), u.end()), u.end());

  cout << (u.length() % 2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
}
