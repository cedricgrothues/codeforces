#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int e;

  while (cin >> e)
    v.push_back(e);

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];

    if (i != v.size() - 1)
      cout << '+';
  }

  cout << '\n';
}
